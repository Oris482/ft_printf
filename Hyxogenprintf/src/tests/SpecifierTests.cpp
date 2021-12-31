#include "Tests.h"
#include "../PrintfTester.h"
#include <AirTester.h>

// #define DISABLE_SPECIFIER_TESTS

#ifdef DISABLE_SPECIFIER_TESTS

#else
TEST(specifier_tests, all) {
	EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, "%%"));
	EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, "%%%%%%%%%%"));
	EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, "%% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %%"));
	EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, "%% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %%"));
	EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_NO_SPECIFIER_LORUM()));
}
#endif