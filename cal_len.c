/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:22:08 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/04 18:55:53 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	cal_len(long long var, char *type)
{
	int cnt;
	int	base;

	cnt = 0;
	base = 10;
	if (*type == 'c')
		return (1);
	else if (*type == 's')
		return (ft_strlen((char *)var));
	else if (*type == 'p')
		return (0);
	else
	{
		if(*type =='x' || *type == 'X')
			base = 16;
		while (var != 0)
		{
			var = var / base;
			cnt++;
		}
		return (cnt);
	}
}
