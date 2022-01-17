/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_len_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:22:08 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/17 18:23:36 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

static long long	set_num(long long n, char type)
{
	if (type == 'l')
		return (n);
	else if (type == 'u' || type == 'x' || type == 'X')
		return ((unsigned int)n);
	else
		return ((int)n);
}

static int	set_base(char type)
{
	if (type == 'x' || type == 'X')
		return (16);
	else
		return (10);
}

static int	cal_addlen(void *address)
{
	unsigned long long	dec_add;
	int					cnt;

	dec_add = (unsigned long long)address;
	cnt = 0;
	if (dec_add == 0)
		return (3);
	while (dec_add != 0)
	{
		dec_add = dec_add / 16;
		cnt++;
	}
	return (2 + cnt);
}

int	cal_len(long long var, char type)
{
	int	cnt;
	int	base;

	cnt = 0;
	base = set_base(type);
	if (type == 'c' || type == '%')
		return (1);
	else if (type == 's')
		return (ft_strlen((char *)var));
	else if (type == 'p')
		return (cal_addlen((void *)var));
	else
	{
		if (var < 0 && (type == 'd' || type == 'i'))
			cnt++;
		var = set_num(var, type);
		if (var == 0)
			return (1);
		while (var != 0)
		{
			var = var / base;
			cnt++;
		}
		return (cnt);
	}
}
