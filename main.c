/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:02:09 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/18 20:34:45 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int ft_printf(const char *str, ...);

int	main(void)
{
	int	cnt;
	char *mall;
	int	int_max = INT_MAX;
	int	int_min = INT_MIN;
	unsigned int uint_min = (unsigned int)int_min;
/*	
	cnt = printf("hello %s!\n", "student");
	printf("len = %d\n", cnt);
	cnt = ft_printf("hello %s!\n", "student");
	ft_printf("len = %d\n", cnt);
	printf("--------------------------------\n");

	cnt = printf("%u\n", -10);
	printf("len = %d\n", cnt);
	cnt = ft_printf("%u\n", -10);
	ft_printf("len = %d\n", cnt);
	printf("--------------------------------\n");

	cnt = printf("ab%cd\n", 'c');
	printf("len = %d\n", cnt);
	cnt = ft_printf("ab%cd\n", 'c');
	ft_printf("len = %d\n", cnt);
	printf("--------------------------------\n");

	cnt = printf("%x, %X\n", 0, 0);
	printf("len = %d\n", cnt);
	cnt = ft_printf("%x, %X\n", 0, 0);
	ft_printf("len = %d\n", cnt);
	printf("--------------------------------\n");

	cnt = printf("%x, %X\n", int_max, int_max);
	printf("len = %d\n", cnt);
	cnt = ft_printf("%x, %X\n", int_max, int_max);
	ft_printf("len = %d\n", cnt);
	printf("--------------------------------\n");

	cnt = printf("%d, %X\n", int_min, int_min);
	printf("len = %d\n", cnt);
	cnt = ft_printf("%d, %X\n", int_min, int_min);
	ft_printf("len = %d\n", cnt);
	printf("--------------------------------\n");

	cnt = printf("%x, %X\n", 2874279, 2874279);
	printf("len = %d\n", cnt);
	cnt = ft_printf("%x, %X\n", 2874279, 2874279);
	ft_printf("len = %d\n", cnt);
	printf("--------------------------------\n");

	cnt = printf("%s %s %c%c%c,%%%d, %i, %x, %X, %u%%\n", "this", "is", 'm', 'i', 'x', 123, 123, 123, 123, 3333333333);
	printf("len = %d\n", cnt);
	cnt = ft_printf("%s %s %c%c%c,%%%d, %i, %x, %X, %u%%\n", "this", "is", 'm', 'i', 'x', 123, 123, 123, 123, 3333333333);
	ft_printf("len = %d\n", cnt);
	printf("--------------------------------\n");
	
	cnt = printf("cnt = %p\n", &int_max);
	printf("%d\n", cnt);
	cnt = ft_printf("cnt = %p\n", &int_max);
	ft_printf("%d\n", cnt);
	printf("--------------------------------\n");
	
	cnt = printf("cnt = %p\n", &mall);
	printf("%d\n", cnt);
	cnt = ft_printf("cnt = %p\n", &mall);
	ft_printf("%d\n", cnt);
	printf("--------------------------------\n");
	*/
	/*
	cnt = printf("%c", NULL);
	printf("   %d\n", cnt);
	cnt = ft_printf("%c", NULL);
	ft_printf("   %d\n", cnt);
	ft_printf("--------------------\n");
	cnt = printf("%s", NULL);
	printf("   %d\n", cnt);
	cnt = ft_printf("%s", NULL);
	ft_printf("   %d\n", cnt);
	ft_printf("--------------------\n");
	cnt = ft_printf("%p", NULL);
	ft_printf("   %d\n", cnt);
	cnt = ft_printf("%d", NULL);
	ft_printf("   %d\n", cnt);
	cnt = ft_printf("%i", NULL);
	ft_printf("   %d\n", cnt);
	cnt = ft_printf("%u", NULL);
	ft_printf("   %d\n", cnt);
	cnt = ft_printf("%x", NULL);
	ft_printf("   %d\n", cnt);
	cnt = ft_printf("%X", NULL);
	ft_printf("   %d\n", cnt);
	printf("\n-----------type p error case-------------\n");
	cnt = printf("%p    %p\n", LONG_MIN, LONG_MAX);
	printf("cnt = %d\n", cnt);
	cnt = ft_printf("%p    %p\n", LONG_MIN, LONG_MAX);
	ft_printf("cnt = %d\n", cnt);
	printf("--------------------------------\n");
	cnt = printf("%p    %p\n", ULONG_MAX, -ULONG_MAX);
	printf("cnt = %d\n", cnt);
	cnt = ft_printf("%p    %p\n", ULONG_MAX, -ULONG_MAX);
	ft_printf("cnt = %d\n", cnt);
	printf("--------------------------------\n");
	cnt = printf("origin : %p  %p ", 0, 0);
	printf("cnt = %d\n", cnt);
	printf("\n");
	cnt = ft_printf("myfunc : %p  %p ", 0, 0);
	ft_printf("cnt = %d\n", cnt);
	printf("--------------------------------\n");
	*/
	/*
	cnt = printf("%");
	printf("%d\n", cnt);
	cnt = ft_printf("%");
	ft_printf("%d\n", cnt);
	printf("-----------\n");
	cnt = printf("%%%%%%%");
	printf("%d\n", cnt);
	cnt = ft_printf("%%%%%%%");
	ft_printf("%d\n", cnt);
	printf("-----------\n");
	cnt = printf("%%%%%%%\n");
	printf("%d\n", cnt);
	cnt = ft_printf("%%%%%%%\n");
	ft_printf("%d\n", cnt);
	printf("-----------\n");
	printf("wrong variable\n");
	printf("%d, %d, %d\n", 1, 2);
	ft_printf("%d, %d, %d\n", 1, 2);
	printf("%d, %d, %d\n", 1, 2, 3, 4);
	ft_printf("%d, %d, %d\n", 1, 2, 3, 4);
	*/
	//ft_printf("%+ d, %+s, % s, %+ + p", 42, "s42", "s42", &int_max);
	//printf("%%###000- - - + 123.#23.-+ .30d");
	//ft_printf("%###000- - - + 123.#23.12-+ .30d\n", 42);
	//ft_printf("%10.d\n", 0);
	//ft_printf("%010cend\n", 'A');
	//ft_printf("%0# 10.3send\n", "hello");
	//printf("%0# 10.3send\n", "hello");
	ft_printf("%+5d\n", 4242);
	ft_printf("% 5i\n", 4242);
	ft_printf("%#5x\n", 4242);
	ft_printf("%#5X\n", 4242);
	ft_printf("%5u\n", 4242);
	return (0);
}
