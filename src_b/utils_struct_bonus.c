/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_struct_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:57:15 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/18 19:38:18 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

static void	off_option(int cnt, ...)
{
	va_list	op_list;
	int		*target;

	va_start(op_list, cnt);
	while (cnt > 0)
	{
		target = (int *)va_arg(op_list, void *);
		*target = 0;
		cnt--;
	}
	va_end(op_list);
}

char	*set_data_type(char *str)
{
	if (*str == 'c' || *str == 'd' || *str == 'i'\
			|| *str == 'u' || *str == 'x' || *str == 'X')
		return ("4");
	else if (*str == 's' || *str == 'p')
		return ("8");
	else
		return ("%");
}

static void	resize_len(t_property *var_p)
{
	if (ft_strchr(NUMBERS, var_p->print_type))
	{
		if (var_p->p_int == 0 && var_p->var == 0)
		{
			var_p->print_type = 's';
			var_p->len_origin = 0;
		}
		else if (var_p->p_int < var_p->len_origin)
			off_option(2, &(var_p->p_dot), &(var_p->p_int));
	}
	if (var_p->print_type == 's')
	{
		if (var_p->len_origin < var_p->p_int)
			off_option(2, &(var_p->p_dot), &(var_p->p_int));
		else
			var_p->len_origin = var_p->p_int;
	}
}

void	adjust_struct(t_property *var_p)
{
	if (var_p->w_int <= var_p->len_origin)
		off_option(3, &(var_p->f_zero), &(var_p->f_minus), &(var_p->w_int));
	if ((var_p->f_minus == 1 && var_p->f_zero == 1) || \
			(ft_strchr(NUMBERS, var_p->print_type) != 0 && var_p->p_dot))
		var_p->f_zero = 0;
	if (var_p->print_type != 'd' && var_p->print_type != 'i')
		off_option(2, &(var_p->f_plus), &(var_p->f_space));
	else
		if ((int)var_p->var < 0)
			off_option(2, &(var_p->f_plus), &(var_p->f_space));
	if (var_p->f_plus == 1 && var_p->f_space == 1)
		var_p->f_space = 0;
	if (var_p->print_type != 'x' && var_p->print_type != 'X')
		var_p->f_pound = 0;
	if (var_p->f_pound == 1 && \
			(var_p->print_type == 'x' || var_p->print_type == 'X'))
		var_p->f_pound = 2;
	if (var_p->print_type == 'c' || var_p->print_type == 'p')
		off_option(2, &(var_p->p_dot), &(var_p->p_int));
	if (var_p->p_dot == 1)
		resize_len(var_p);
}
