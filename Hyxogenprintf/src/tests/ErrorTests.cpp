#include "Tests.h"
#include "../PrintfTester.h"
#include <AirTester.h>
#include <limits>

#define DISABLE_ERROR_TESTS

#ifdef DISABLE_ERROR_TESTS

#else
TEST(error_tests, all) {
	TEST_PRINTF_FUNC("%*d", INT_MAX, 0);
	TEST_PRINTF_FUNC("%.*d", INT_MAX, 0);
	TEST_PRINTF_FUNC("%*.*d", INT_MAX, INT_MAX, 0);
	TEST_PRINTF_FUNC("%2147483647.*d", INT_MAX, 0);
	TEST_PRINTF_FUNC("%*.2147483647d", INT_MAX, 0);
	TEST_PRINTF_FUNC("%2147483647.2147483647d", 0);
	TEST_PRINTF_FUNC("%-1.-3d", 0);
}
#endif