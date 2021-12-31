#include "Tests.h"
#include "../PrintfTester.h"
#include <AirTester.h>

// #define DISABLE_SPECIFIER_TESTS

#ifdef DISABLE_SPECIFIER_TESTS

#else
TEST(mixed_tests, all) {
	TEST_PRINTF_FUNC("%sH%de%u%%%%%%%%%%%%%%%%l%il%x%%o%%%p%c", (char*) 0, INT_MIN, UINT_MAX, 0, 0xff00ff, (void*) 0xf1e2d3c4b5a69788, '!');
	TEST_PRINTF_FUNC("%%%%%%%*.*sH%%%42d%%%%e%21ul%5.10il%10.5xo%%%%%%%%%42.4p%c", 21, 42, (char*) 0, INT_MIN, UINT_MAX, 0, 0xff00ff, (void*) 0xf1e2d3c4b5a69788, '!');
}
#endif