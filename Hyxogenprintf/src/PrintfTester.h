#ifndef PRINTFTESTER_H
#define PRINTFTESTER_H

#include <stdarg.h>
#include <unistd.h>
#include <iostream>
#include "utils/Assert.h"

extern "C" {
	#include "buffered_writer.h"
}

#define BUFFER_SIZE 40960
/*
 * TODO
 * test functie voor printf afmaken
 * mem leak check afmaken
 * mem fail check afmaken
 * mandatory en bonus checks maken voor char string en signed int
 */


template<typename... Types>
void DebugPrintValues(int i, Types... ts) {
	DebugPrintValues(i, ts...);
}

template<typename Type>
void DebugPrintValues(int i, Type t) {
	std::cerr << "val:" << i << std::endl;
	std::cerr << t << std::endl;
	std::cerr << "Last value" << std::endl;
}

template<typename Type, typename... Types>
void DebugPrintValues(int i, Type t, Types... ts) {
	std::cerr << "val:" << i << std::endl;
	if (t == 0)
		std::cerr << 0 << std::endl;
	else
		std::cerr << t << std::endl;
	DebugPrintValues(i + 1, ts...);
}

template<typename... Types>
void PrintInfo(const char *format, int testRet, int corrRet, char *testBuffer, char *corrBuffer, Types... ts) {
	std::cerr << "--------------------------------------------" << std::endl;
	std::cerr << "Return values: your printf:" << testRet << " actual printf:" << corrRet << std::endl << std::endl;
	std::cerr << "Format string: \"" << format << "\"" << std::endl << std::endl;
		std::cerr << "YOUR PRINTF RESULT" << std::endl;
	std::cerr << '\"' << testBuffer << '\"' << std::endl << std::endl;
	// for (int i = 0; i < testRet; i++) {
	// 	std::fprintf(stderr, "%u", (unsigned char) testBuffer[i]);
	// 	// std::cerr << (unsigned char) testBuffer[0];
	// }
	std::cerr << std::endl << std::endl;
	std::cerr << "ACTUAL PRINTF RESULT" << std::endl;
	std::cerr << '\"' << corrBuffer << '\"' << std::endl;
	// for (int i = 0; i < corrRet; i++) {
	// 	std::fprintf(stderr, "%u", (unsigned char) corrBuffer[i]);
	// 	// std::cerr << (unsigned char) corrBuffer[0];
	// }
	std::cerr << std::endl << std::endl;
	
	DebugPrintValues(1, ts...);
	std::cerr << "--------------------------------------------" << std::endl << std::endl;
}

template<typename... Types>
int ComparePrintf(int (*testPrintf)(const char *, ...), int (*corrPrintf)(char *, const char *, ...), const char *format, Types... ts) {
	static int	stdout_copy = 0;
	char		corrBuffer[BUFFER_SIZE + 1];
	char		testBuffer[BUFFER_SIZE + 1];
	int 		corrRet, testRet;

	if (!stdout_copy) {
		ASSERT((stdout_copy = dup(1)) != -1)
	}

	ASSERT(setvbuf(stdout, NULL, _IONBF, 0) != EOF);
	std::memset(&testBuffer[0], 11, BUFFER_SIZE + 1);
	std::memset(&corrBuffer[0], 5, BUFFER_SIZE + 1);
	corrRet = corrPrintf(&corrBuffer[0], format, ts...);
	set_internal_buffer(1, &testBuffer[0], BUFFER_SIZE + 1);
	testRet = testPrintf(format, ts...);
	write(1, "\0", 1);
	flush_without_writing(1);
	if (!std::strncmp(&corrBuffer[0], &testBuffer[0], corrRet) && corrRet == testRet)
		return (1);
	if (corrRet == -1 && corrRet == testRet)
		return (1);
	PrintInfo(format, testRet, corrRet, &testBuffer[0], &corrBuffer[0], ts...);
	return (0);
}

// #pragma clang diagnostic push
// #pragma clang diagnostic ignored "-Wformat-security"
// template<typename... Type>
// int ComparePrintf(int (*printf1)(const char *, ...), int (*printf2)(const char *, ...), const char *format, Type... ts) {
// 	static int	stdout_copy = 0;
// 	char		buffer1[BUFFER_SIZE + 1];
// 	char		buffer2[BUFFER_SIZE + 1];
// 	int			pipe_fds[2];
// 	int 		ret1, ret2;
// 	int 		eof;
// 	size_t 		read_size;

// 	if (!stdout_copy) {
// 		ASSERT((stdout_copy = dup(1)) != -1)
// 	}

// 	eof = EOF;
// 	fflush(stdout);
// 	// ASSERT(setvbuf(stdout, NULL, _IONBF, 0) != EOF)
// 	ASSERT(pipe(pipe_fds) != -1)
// 	ASSERT(dup2(pipe_fds[1], 1) != -1)
// 	set_internal_buffer(1, &buffer1[0], BUFFER_SIZE + 1);
// 	ret1 = printf1(format, ts...);
// 	write(1, &eof, 1);
// 	fflush(stdout);
// 	ASSERT((read_size = read(pipe_fds[0], &buffer1[0], BUFFER_SIZE)) >= 0)
// 	buffer1[read_size] = '\0';

// 	set_internal_buffer(1, &buffer1[0], BUFFER_SIZE + 1);
// 	ret2 = printf2(format, ts...);
// 	write(1, &eof, 1);
// 	fflush(stdout);
// 	ASSERT((read_size = read(pipe_fds[0], &buffer2[0], BUFFER_SIZE)) >= 0)
// 	buffer2[read_size] = '\0';
// 	ASSERT(dup2(stdout_copy, 1) != -1)
// 	ASSERT(close(pipe_fds[0]) != -1)
// 	ASSERT(close(pipe_fds[1]) != -1)
// 	if (!std::strcmp(&buffer1[0], &buffer2[0]) && ret1 == ret2)
// 		return (1);
	
// 	std::cerr << "--------------------------------------------" << std::endl;
// 	std::cerr << "Comparison of printf failed" << std::endl;
// 	std::cerr << "Format string: \"" << format << "\"" << std::endl;
// 	std::cerr << "Return values: printf1:" << ret1 << " printf2:" << ret2 << std::endl;
// 	std::cerr << "Printf1 result:" << std::endl;
// 	std::cerr << &buffer1[0] << std::endl;
// 	std::cerr << "Printf2 result:" << std::endl;
// 	std::cerr << &buffer2[0] << std::endl;
// 	DebugPrintValues(1, ts...);
// 	std::cerr << "--------------------------------------------" << std::endl << std::endl;

// 	return (0);
// 	return (!std::strcmp(&buffer1[0], &buffer2[0]) && ret1 == ret2);
// }
// #pragma clang diagnostic pop

/*
*/
#endif //PRINTFTESTER_H
