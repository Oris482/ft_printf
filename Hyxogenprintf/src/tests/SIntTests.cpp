#include "../PrintfTester.h"
#include "Tests.h"

#include <AirTester.h>
#include <vector>
#include <iostream>
#include <limits>

#define SINT_POLES 0x7F
// #define DISABLE_SINT_TEST

#ifdef DISABLE_SINT_TEST

#else
static const std::vector<int>& GetTestVector() {
	static std::vector<int> vec;
	if (vec.empty()) {
		for (int i = -SINT_POLES; i < SINT_POLES; i++)
			vec.push_back(i);
		vec.push_back(INT_MIN);
		vec.push_back(INT_MAX);
		vec.push_back(UINT_MAX);
	}
	return vec;
}

// TEST(sint_tests, limit_tests) {
// 	TEST_PRINTF_FUNC("%2147483647d", 0);
// 	TEST_PRINTF_FUNC("%.2147483647d", 0);
// 	TEST_PRINTF_FUNC("%2147483647d", 42);
// 	TEST_PRINTF_FUNC("%.2147483647d", 42);
// }

ALL_MANDATORY_TESTS(sint, "d", GetTestVector())
ALL_MANDATORY_TESTS(siint, "i", GetTestVector())

BONUS_SINGLE_SPECIFIER_NO_FLAG_TEST(sint, "d", GetTestVector())
BONUS_SINGLE_SPECIFIER_PLUS_FLAG_TEST(sint, "d", GetTestVector())
BONUS_SINGLE_SPECIFIER_MINUS_FLAG_TESTS(sint, "d", GetTestVector())
BONUS_SINGLE_SPECIFIER_BLANK_FLAG_TEST(sint, "d", GetTestVector())
BONUS_SINGLE_SPECIFIER_SHARP_FLAG_TEST(sint, "d", GetTestVector())
BONUS_SINGLE_SPECIFIER_ZERO_FLAG_TEST(sint, "d", GetTestVector())

BONUS_SINGLE_SPECIFIER_STRING_NO_FLAG_TEST(sint, "d", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_PLUS_FLAG_TEST(sint, "d", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_MINUS_FLAG_TESTS(sint, "d", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_BLANK_FLAG_TEST(sint, "d", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_SHARP_FLAG_TEST(sint, "d", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_ZERO_FLAG_TEST(sint, "d", GetTestVector())

BONUS_TWO_SPECIFIER_STRING_NO_FLAG_TEST(sint, "d", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_MINUS_FLAG_TESTS(sint, "d", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_BLANK_FLAG_TEST(sint, "d", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_SHARP_FLAG_TEST(sint, "d", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_ZERO_FLAG_TEST(sint, "d", GetTestVector())

BONUS_SINGLE_SPECIFIER_NO_FLAG_TEST(siint, "i", GetTestVector())
BONUS_SINGLE_SPECIFIER_PLUS_FLAG_TEST(siint, "i", GetTestVector())
BONUS_SINGLE_SPECIFIER_MINUS_FLAG_TESTS(siint, "i", GetTestVector())
BONUS_SINGLE_SPECIFIER_BLANK_FLAG_TEST(siint, "i", GetTestVector())
BONUS_SINGLE_SPECIFIER_SHARP_FLAG_TEST(siint, "i", GetTestVector())
BONUS_SINGLE_SPECIFIER_ZERO_FLAG_TEST(siint, "i", GetTestVector())

BONUS_SINGLE_SPECIFIER_STRING_NO_FLAG_TEST(siint, "i", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_PLUS_FLAG_TEST(siint, "i", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_MINUS_FLAG_TESTS(siint, "i", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_BLANK_FLAG_TEST(siint, "i", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_SHARP_FLAG_TEST(siint, "i", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_ZERO_FLAG_TEST(siint, "i", GetTestVector())

BONUS_TWO_SPECIFIER_STRING_NO_FLAG_TEST(siint, "i", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_MINUS_FLAG_TESTS(siint, "i", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_BLANK_FLAG_TEST(siint, "i", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_SHARP_FLAG_TEST(siint, "i", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_ZERO_FLAG_TEST(siint, "i", GetTestVector())
#endif