/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:22:08 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/10 18:00:55 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static long long	set_num(long long n, char *type)
{
	if (*type == 'l')
		return (n);
	else if (*type == 'u' || *type == 'x' || *type == 'X')
		return ((unsigned int)n);
	else
		return ((int)n);
}

int	cal_len(long long var, char *type)
{
	int	cnt;
	int	base;

	cnt = 0;
	base = 10;
	if (*type == 'c')
		return (1);
	else if (*type == 's')
		return (ft_strlen((char *)var));
	else
	{
		if (var < 0 && (*type == 'd' || *type == 'i'))
			cnt++;
		var = set_num(var, type);
		if (var == 0)
			return (1);
		if (*type == 'x' || *type == 'X')
			base = 16;
		while (var != 0)
		{
			var = var / base;
			cnt++;
		}
		return (cnt);
	}
}
