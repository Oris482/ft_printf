#include "../PrintfTester.h"
#include "Tests.h"

#include <AirTester.h>
#include <vector>
#include <iostream>
#include <limits.h>

#define HEX_POLES 0x7F
// #define DISABLE_HEX_TEST

#ifdef DISABLE_HEX_TEST

#else
static const std::vector<long long>& GetTestVector() {
	static std::vector<long long> vec;
	if (vec.empty()) {
		for (int i = -HEX_POLES; i < HEX_POLES; i++)
			vec.push_back(i);
		vec.push_back(INT_MIN);
		vec.push_back(INT_MAX);
		vec.push_back(UINT_MAX);
		vec.push_back(LONG_MIN);
		vec.push_back(LONG_MAX);
		vec.push_back(ULONG_MAX);
		vec.push_back(LLONG_MIN);
		vec.push_back(LLONG_MAX);
		vec.push_back(ULLONG_MAX);
	}
	return vec;
}

ALL_MANDATORY_TESTS(hex, "x", GetTestVector())
BONUS_SINGLE_SPECIFIER_NO_FLAG_TEST(hex, "x", GetTestVector())
BONUS_SINGLE_SPECIFIER_MINUS_FLAG_TESTS(hex, "x", GetTestVector())
BONUS_SINGLE_SPECIFIER_SHARP_FLAG_TEST(hex, "x", GetTestVector())
BONUS_SINGLE_SPECIFIER_ZERO_FLAG_TEST(hex, "x", GetTestVector())

BONUS_SINGLE_SPECIFIER_STRING_NO_FLAG_TEST(hex, "x", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_MINUS_FLAG_TESTS(hex, "x", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_SHARP_FLAG_TEST(hex, "x", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_ZERO_FLAG_TEST(hex, "x", GetTestVector())

BONUS_TWO_SPECIFIER_STRING_NO_FLAG_TEST(hex, "x", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_MINUS_FLAG_TESTS(hex, "x", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_SHARP_FLAG_TEST(hex, "x", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_ZERO_FLAG_TEST(hex, "x", GetTestVector())

ALL_MANDATORY_TESTS(uhex, "X", GetTestVector())
BONUS_SINGLE_SPECIFIER_NO_FLAG_TEST(uhex, "X", GetTestVector())
BONUS_SINGLE_SPECIFIER_MINUS_FLAG_TESTS(uhex, "X", GetTestVector())
BONUS_SINGLE_SPECIFIER_SHARP_FLAG_TEST(uhex, "X", GetTestVector())
BONUS_SINGLE_SPECIFIER_ZERO_FLAG_TEST(uhex, "X", GetTestVector())

BONUS_SINGLE_SPECIFIER_STRING_NO_FLAG_TEST(uhex, "X", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_MINUS_FLAG_TESTS(uhex, "X", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_SHARP_FLAG_TEST(uhex, "X", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_ZERO_FLAG_TEST(uhex, "X", GetTestVector())

BONUS_TWO_SPECIFIER_STRING_NO_FLAG_TEST(uhex, "X", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_MINUS_FLAG_TESTS(uhex, "X", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_SHARP_FLAG_TEST(uhex, "X", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_ZERO_FLAG_TEST(uhex, "X", GetTestVector())
#endif