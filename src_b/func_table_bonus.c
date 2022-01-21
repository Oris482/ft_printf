/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_table_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:19:20 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/21 16:10:05 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

int	func_szero(int *status, const char *str, t_property **var_p, va_list ap)
{
	if (*str == '%')
	{
		*status = 1;
		*var_p = (t_property *)ft_calloc(1, sizeof(t_property));
		if (var_p == NULL)
			return (-1);
		return (0);
	}
	else
		return (ft_rputchar_fd(*str, 1));
}

int	func_sone(int *status, const char *str, t_property **var_p, va_list ap)
{
	if (ft_strchr(FLAGS, *str))
	{
	}
}

int	func_stwo(int *status, const char *str, t_property **var_p, va_list ap)
{
	if (*status == 2)
		;
}

int	func_table(int *status, const char *str, t_property **var_p, va_list ap)
{
	int	(*func_list[3])(int *, const char *, t_property **, va_list) = {
		func_szero, func_sone, func_stwo};

	return (func_list[*status](status, str, var_p, ap));
}
