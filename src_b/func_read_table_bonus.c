/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_read_table_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:18:39 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/24 15:07:53 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

int	func_write(int *status, const char *str, t_prop **var_p)
{
	if (*str == '%')
	{
		*status = 1;
		*var_p = (t_prop *)ft_calloc(1, sizeof(t_prop));
		if (var_p == NULL)
			return (-1);
		return (0);
	}
	else
		return (ft_rputchar_fd(*str, 1));
}

int	func_flags(int *status, const char *str, t_prop **var_p, va_list *ap)
{
	if (ft_strchr(FLAGS, *str))
	{
		(*var_p)->flags = (*var_p)->flags | (1 << ft_strwchr(FLAGS, *str));
		if (*str == '.')
			*status = 3;
	}
	else if (ft_strchr(ONENINE, *str))
	{
		*status = 2;
		(*var_p)->width = *str - '0';
	}
	else
		return (func_print(status, str, var_p, ap));
	return (0);
}

int	func_width(int *status, const char *str, t_prop **var_p, va_list *ap)
{
	if (ft_strchr(ZERONINE, *str))
		(*var_p)->width = (*var_p)->width * 10 + (*str - '0');
	else if (*str == '*')
		(*var_p)->width = (int)va_arg(*ap, int);
	else if (*str == '.')
		*status = 3;
	else
		return (func_print(status, str, var_p, ap));
	return (0);
}

int	func_precision(int *status, const char *str, t_prop **var_p, va_list *ap)
{
	if (ft_strchr(ZERONINE, *str))
		(*var_p)->precision = (*var_p)->precision * 10 + (*str - '0');
	else if (*str == '*')
		(*var_p)->precision = (int)va_arg(*ap, int);
	else
		return (func_print(status, str, var_p, ap));
	return (0);
}
