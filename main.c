/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:02:09 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/04 19:26:08 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int	main(void)
{
	int	cnt;
	int	int_max = 2147483647;
	int	int_min = -2147483648;

//	cnt = ft_printf("hello %s!\n", "student");
//	ft_printf("%u\n", -10);
//	ft_printf("ab%cd\n", 'c');
//	ft_printf("%x, %X\n", 0, 0);
//	ft_printf("%x, %X\n", int_max, int_max);
//	ft_printf("%x, %X\n", int_min, int_min);
//	ft_printf("%x, %X\n", 2874279, 2874279);
	ft_printf("%s %s, %d, %i, %x, %X\n", "this", "is", 123, 123, 123, 123);
	return (0);
}
