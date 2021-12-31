#include "buffered_writer.h"
#include <dlfcn.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <signal.h>

#define FILEDES_CNT 10

static char* g_Buffer[FILEDES_CNT];
static char* g_WritePtr[FILEDES_CNT];
static size_t g_BufferSize[FILEDES_CNT];
static size_t g_FlushSize[FILEDES_CNT];

void set_internal_buffer(int filedes, char *buffer, size_t size) {
	g_Buffer[filedes] = buffer;
	g_BufferSize[filedes] = size;
	g_WritePtr[filedes] = buffer;
	g_FlushSize[filedes] = 0;
}

ssize_t write(int filedes, const void *buf, size_t nbyte) {
	memcpy(g_WritePtr[filedes], buf, nbyte);
	g_FlushSize[filedes] += nbyte;
	g_WritePtr[filedes] += nbyte;
	return nbyte;
	return (0);
}

ssize_t write_unbuffered(int filedes, const void* buf, size_t nbyte) {
	static ssize_t (*libc_write)(int, const void *, size_t) = 0;

	if (libc_write == 0)
		libc_write = (ssize_t (*)(int, const void *, size_t)) dlsym(RTLD_NEXT, "write");
	return libc_write(filedes, buf, nbyte);
}

ssize_t flush_internal_buffer(int filedes) {
	ssize_t ret;

	ret = write_unbuffered(filedes, g_Buffer[filedes], g_FlushSize[filedes]);
	g_WritePtr[filedes] = g_Buffer[filedes];
	g_FlushSize[filedes] = 0;
	return ret;
}

ssize_t flush_without_writing(int filedes) {
	ssize_t ret;

	ret = g_FlushSize[filedes];
	g_WritePtr[filedes] = g_Buffer[filedes];
	g_FlushSize[filedes] = 0;
	return ret;
}
