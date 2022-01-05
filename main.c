/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:02:09 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/05 14:59:21 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	cnt;
	char *mall;
	int	int_max = 2147483647;
	int	int_min = -2147483648;

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

	cnt = printf("%x, %X\n", int_min, int_min);
	printf("len = %d\n", cnt);
	cnt = ft_printf("%x, %X\n", int_min, int_min);
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
	return (0);
}
