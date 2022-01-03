/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testflags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 13:55:30 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/01 16:41:27 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	printf("*****Testing 0 flag*****\n");
	printf("Hello, %5d seoul!\n", 42);
	printf("Hello, %05d seoul!\n", 42);
	printf("\n");
	
	printf("*****Testing - flag*****\n");
	printf("Hello, %5d seoul!\n", 42);
	printf("Hello, %-5d seoul!\n", 42);
	printf("^^^^^both of - and 0 flags^^^^^\n");
	printf("Hello, %-05d seoul!\n", 42);
	printf("\n");

	printf("*****Testing + flag*****\n");
	printf("Hello, %d seoul!\n", 42);
	printf("Hello, %+d seoul!\n", 42);
	printf("\n");

	printf("*****Testing space flag*****\n");
	printf("Hello, %d seoul!\n", 42);
	printf("Hello, % d seoul!\n", 42);
	printf("^^^^^both of + and space flags^^^^^\n");
	printf("Hello, %+ dseoul!\n", 42);
	printf("\n");
	
	printf("*****Testing # flag*****\n");
	printf("#####with d type#####\n");
	printf("Hello, %d seoul!\n", 42);
	printf("Hello, %#d seoul!\n", 42);
	printf("#####with o type#####\n");
	printf("Hello, %o seoul!\n", 42);
	printf("Hello, %#o  seoul!\n", 42);
	printf("#####with x type#####\n");
	printf("Hello, %x seoul!\n", 42);
	printf("Hello, %#x  seoul!\n", 42);
	printf("#####with X type#####\n");
	printf("Hello, %X seoul!\n", 42);
	printf("Hello, %#X  seoul!\n", 42);
	printf("\n");
	
	printf("*****Testing . flag*****\n");
	printf("-----only .type-----\n");
	printf("#####with d type#####\n");
	printf("Hello, %d seoul!\n", 42);
	printf("Hello, %.d seoul!\n", 42);
	printf("^^^^^with 0 flag and d type^^^^^\n");
	printf("Hello, %05d seoul!\n", 42);
	printf("Hello, %05.d seoul!\n", 42);
	printf("#####with s type#####\n");
	printf("Hello, 42 %s!\n", "seoul");
	printf("Hello, 42 %.s!\n", "seoul");
	printf("^^^^^both of * width and . flag^^^^^\n");
	printf("Hello, 42 %*.s!\n", 5, "seoulll");
	printf("^^^^^with . flag + *s option^^^^^\n");
	printf("Hello, 42 %.*s!\n", 5, "seoulll");
	printf("^^^^^width * + flag .*s^^^^^\n");
	printf("Hello, 42 %*.*s!\n", 6, 5, "seoulll");
	printf("-----with n + .type-----\n");
	printf("#####with d type#####\n");
	printf("Hello, %d seoul!\n", 42);
	printf("Hello, %.3d seoul!\n", 42);
	printf("^^^^^n = 0 and d = 0^^^^^\n");
	printf("Hello, %d seoul!\n", 0);
	printf("Hello, %.0d seoul!\n", 0);
	printf("Hello, %0d seoul!\n", 0);
	printf("Hello, %00d seoul!\n", 0);
	printf("Hello, %0.0d seoul!\n");

	printf("*****Testing error case*****\n");
	printf("Hello, %m seoul!\n", 42);
	printf("Hello, %3m seoul!\n", 42);
	printf("Hello, %0-#3.#*+mseoul!\n", 42);
	printf("Hello, %0-0d seoul!\n", 42);
	printf("Hello, %-00d seoul!\n", 42);
	printf("\n");
	printf("%.d\n", 0);
	printf("%.0d\n", 0);
	printf("%.d\n", 00);
	printf("%.0d\n", 00);
	printf("%0+9.d\n", 1000);
	printf("%0+9.0d\n", 1000);
	printf("%.d\n", -1000);
	printf("%.0d\n", -1000);

	printf("*****Escape case*****\n");
	char *str = "abc\tefg\n123\v456\\789\'zxc\"vbn\\\?";
	printf("%s\n", str);
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}

	printf("\n*****both of * and n width*****\n");
	printf("Hello, %03*d seoul!\n", 5, 42);
	printf("Hello, %03d seoul!\n", 42);

	printf("*****type d and i*****\n");
	printf("Hello, %d seoul!\n", 42);
	printf("Hello, %i seoul!\n", 42);
	printf("Hello, %d seoul!\n", 052);
	printf("Hello, %i seoul!\n", 052);
	printf("Hello, %d seoul!\n", 0x2a);
	printf("Hello, %i seoul!\n", 0x2a);

	printf("*****testing +, space with no num*****\n");
	printf("Hello, %+c\n", 'a');
	printf("Hello, % c\n", 'a');
	printf("Hello, %+s\n", 'abc');
	printf("Hello, % s\n", 'abc');
}
