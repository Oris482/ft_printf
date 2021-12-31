#include "../PrintfTester.h"
#include "Tests.h"

#include <AirTester.h>
#include <vector>
#include <iostream>

#define CHAR_POLES 0x7F
// #define DISABLE_CHAR_TEST

#ifdef DISABLE_CHAR_TEST

#else
static const std::vector<int>& GetTestVector() {
	static std::vector<int> vec;
	if (vec.empty()) {
		for (int i = -CHAR_POLES; i < CHAR_POLES; i++)
			vec.push_back(i);
	}
	return vec;
}

ALL_MANDATORY_TESTS(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_FLAG_X_(char, "c", "-", mflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_FLAG_X_(char, "c", "-", mflag, GetTestVector())

BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_NPREC_(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_NPREC_(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(char, "c", "-", mflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(char, "c", "-", mflag, GetTestVector())

BONUS_TWO_SPECIFIER_STRING_FWIDTH_NPREC_(char, "c", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_VWIDTH_NPREC_(char, "c", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(char, "c", "-", mflag, GetTestVector())
BONUS_TWO_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(char, "c", "-", mflag, GetTestVector())
#endif