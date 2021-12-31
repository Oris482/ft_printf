//
// Created by Daan Meijer on 28/11/2021.
//

#include "Tests.h"
#include <iostream>

extern "C" {
#include "ft_printf.h"
}

TestPrintfFunc_T GetTestFunction() {
	return &ft_printf;
}

CorrectPrintfFunc_T GetCorrectFunction() {
	return &std::sprintf;
}