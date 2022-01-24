/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:56:10 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/24 15:09:06 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		cnt;
	int		tmp;
	int		status[1];
	t_prop	*var_p;

	va_start(ap, str);
	cnt = 0;
	status[0] = 0;
	var_p = NULL;
	while (*str)
	{
		tmp = func_read(&status[0], str, &var_p, &ap);
		if (tmp >= 0)
			cnt += tmp;
		else
		{
			cnt = -1;
			break ;
		}
	}
	va_end(ap);
	return (cnt);
}
