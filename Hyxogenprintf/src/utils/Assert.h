//
// Created by Daan Meijer on 11/23/21.
//

#ifndef ASSERT_H
#define ASSERT_H

#include <signal.h>

#define ASSERT(x) \
	if (x) {         \
    } else {\
		raise(SIGTRAP);\
	}

#endif //ASSERT_H
