#include "Tests.h"
#include <string>
#include <vector>

// #define DISABLE_STRING_TEST

#ifdef DISABLE_STRING_TEST

#else
static const std::vector<const char*>& GetTestVector() {
	static std::vector<const char*> vec = {
			"Hello",
			"Hello World",
			"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.",
			"",
			" ",
			"asdf",
			0
	};
	return vec;
}

TEST(str_tests, null_test) {
	TEST_PRINTF_FUNC("Hello %s!", 0);
	TEST_PRINTF_FUNC("%s %s!", 0, 0);
	TEST_PRINTF_FUNC("%s %.1s!", 0, 0);
	TEST_PRINTF_FUNC("%s %.2s!", 0, 0);
	TEST_PRINTF_FUNC("%s %.3s!", 0, 0);
	TEST_PRINTF_FUNC("%s %1s!", 0, 0);
	TEST_PRINTF_FUNC("%s %21s!", 0, 0);
	TEST_PRINTF_FUNC("%s %42s!", 0, 0);
	// TEST_PRINTF_FUNC(TESTS_ONLY_SPECIFIER_LORUM("%s"), TESTS_ONLY_SPECIFIER_LORUM_ARG(0));
}

ALL_MANDATORY_TESTS(str, "s", GetTestVector())
BONUS_SINGLE_SPECIFIER_NO_FLAG_TEST(str, "s", GetTestVector())
BONUS_SINGLE_SPECIFIER_MINUS_FLAG_TESTS(str, "s", GetTestVector())

BONUS_SINGLE_SPECIFIER_STRING_NO_FLAG_TEST(str, "s", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_MINUS_FLAG_TESTS(str, "s", GetTestVector())

BONUS_TWO_SPECIFIER_STRING_NO_FLAG_TEST(str, "s", GetTestVector())
BONUS_TWO_SPECIFIER_STRING_MINUS_FLAG_TESTS(str, "s", GetTestVector())
// MANDATORY_SINGLE_SPECIFIER_(str, "s", GetTestVector())
// MANDATORY_SPECIFIER_IN_STRING_(str, "s", GetTestVector())
// MANDATORY_SPECIFIERS_IN_STRING_(str, "s", GetTestVector())

// BONUS_SINGLE_SPECIFIER_NO_FLAG_TEST(str, "s", GetTestVector())
// BONUS_SINGLE_SPECIFIER_MINUS_FLAG_TESTS(str, "s", GetTestVector())
// BONUS_SINGLE_SPECIFIER_BLANK_FLAG_TEST(str, "s", GetTestVector())
// BONUS_SINGLE_SPECIFIER_SHARP_FLAG_TEST(str, "s", GetTestVector())
// BONUS_SINGLE_SPECIFIER_ZERO_FLAG_TEST(str, "s", GetTestVector())

// BONUS_SINGLE_SPECIFIER_STRING_NO_FLAG_TEST(str, "s", GetTestVector())
// BONUS_SINGLE_SPECIFIER_STRING_MINUS_FLAG_TESTS(str, "s", GetTestVector())
// BONUS_SINGLE_SPECIFIER_STRING_BLANK_FLAG_TEST(str, "s", GetTestVector())
// BONUS_SINGLE_SPECIFIER_STRING_SHARP_FLAG_TEST(str, "s", GetTestVector())
// BONUS_SINGLE_SPECIFIER_STRING_ZERO_FLAG_TEST(str, "s", GetTestVector())

// BONUS_TWO_SPECIFIER_STRING_NO_FLAG_TEST(str, "s", GetTestVector())
// BONUS_TWO_SPECIFIER_STRING_MINUS_FLAG_TESTS(str, "s", GetTestVector())
// BONUS_TWO_SPECIFIER_STRING_BLANK_FLAG_TEST(str, "s", GetTestVector())
// BONUS_TWO_SPECIFIER_STRING_SHARP_FLAG_TEST(str, "s", GetTestVector())
// BONUS_TWO_SPECIFIER_STRING_ZERO_FLAG_TEST(str, "s", GetTestVector())
#endif
//MANDATORY_ONLY_SPECIFIERS_IN_STRING_(string, "s", GetTestVector())