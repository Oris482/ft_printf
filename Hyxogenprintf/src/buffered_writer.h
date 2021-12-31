#ifndef BUFFERED_WRITER_H
#define BUFFERED_WRITER_H

#include <wchar.h>

void set_internal_buffer(int fildes, char *buffer, size_t size);

ssize_t write(int fildes, const void *buf, size_t nbyte);

ssize_t write_unbuffered(int fildes, const void* buf, size_t nbyte);

ssize_t flush_internal_buffer(int fildes);

ssize_t flush_without_writing(int filedes);
#endif
