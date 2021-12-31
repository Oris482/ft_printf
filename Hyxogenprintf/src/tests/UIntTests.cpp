#include "../PrintfTester.h"
#include "Tests.h"

#include <AirTester.h>
#include <vector>
#include <iostream>
#include <limits>

#define UINT_POLES 0x7F
// #define DISABLE_UINT_TEST

#ifdef DISABLE_UINT_TEST

#else
static const std::vector<unsigned int>& GetTestVector() {
	static std::vector<unsigned int> vec;
	if (vec.empty()) {
		for (int i = -UINT_POLES; i < UINT_POLES; i++)
			vec.push_back(i);
		vec.push_back(INT_MIN);
		vec.push_back(INT_MAX);
		vec.push_back(UINT_MAX);
	}
	return vec;
}

ALL_MANDATORY_TESTS(uint, "u", GetTestVector())
BONUS_SINGLE_SPECIFIER_NO_FLAG_TEST(uint, "u", GetTestVector())
BONUS_SINGLE_SPECIFIER_MINUS_FLAG_TESTS(uint, "u", GetTestVector())
BONUS_SINGLE_SPECIFIER_SHARP_FLAG_TEST(uint, "u", GetTestVector())
BONUS_SINGLE_SPECIFIER_ZERO_FLAG_TEST(uint, "u", GetTestVector())

BONUS_SINGLE_SPECIFIER_STRING_NO_FLAG_TEST(uint, "u", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_MINUS_FLAG_TESTS(uint, "u", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_SHARP_FLAG_TEST(uint, "u", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_ZERO_FLAG_TEST(uint, "u", GetTestVector())

BONUS_TWO_SPECIFIER_STRING_NO_FLAG_TEST(uint, "u", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_MINUS_FLAG_TESTS(uint, "u", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_SHARP_FLAG_TEST(uint, "u", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_ZERO_FLAG_TEST(uint, "u", GetTestVector())
#endif