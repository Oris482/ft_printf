#define DISABLE_HEX_TEST
#define DISABLE_SPECIFIER_TESTS
#define DISABLE_CHAR_TEST
#define DISABLE_SINT_TEST
#define DISABLE_SPECIFIER_TESTS
#define DISABLE_STRING_TEST
#define DISABLE_CHAR_TEST

#include <iostream>
#include <AirTester.h>
#include "tests/Tests.h"
#include "PrintfTester.h"
/*

Alle tests aanzetten voor alle specifier (en gemixed)
Zelf write laten bufferen met een flush functie
Mem leaks testen
Write failures testen

*/

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;
//	std::cout << ComparePrintf(TEST_PRINTF, &std::printf, "%*.c\n", 6, 'a');
//	TEST_PRINTF("%*c\n", 6, 'a');
	AirTester::GetInstance()->RunAll();
	return 0;
}