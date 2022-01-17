/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:41:44 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/17 19:07:11 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

static int	inputed_dec(va_list *ap, char **str)
{
	int		ret;

	ret = 0;
	if (*(*str) == '*')
		ret = (int)va_arg(*ap, int);
	else
	{
		while (*(*str) >= '0' && *(*str) <= '9')
		{
			ret = ret * 10 + (*(*str) - 48);
			(*str)++;
		}
		(*str)--;
	}
	return (ret);
}

static void	find_flags(t_property *var_p, char **str)
{
	(*str)++;
	while (*(*str) != '\0' && ft_strchr(FLAGS, *(*str)))
	{
		if (*(*str) == '0')
			var_p->f_zero = 1;
		else if (*(*str) == '-')
			var_p->f_minus = 1;
		else if (*(*str) == '+')
			var_p->f_plus = 1;
		else if (*(*str) == ' ')
			var_p->f_space = 1;
		else if (*(*str) == '#')
			var_p->f_pound = 1;
		(*str)++;
	}
}

static void	find_width(va_list *ap, t_property *var_p, char **str)
{
	int		cal_wid;

	while (*(*str) != '\0' && (ft_strchr(WIDTH, *(*str)) || \
				ft_strchr(DEC, *(*str)) || ft_strchr(FLAGS, *(*str))))
	{
		cal_wid = 0;
		if (ft_strchr(FLAGS, *(*str)))
			;
		else
			cal_wid = inputed_dec(ap, str);
		(*str)++;
		var_p->w_int = cal_wid;
	}
}

static void	find_precision(va_list *ap, t_property *var_p, char **str)
{
	while (*(*str) != '\0' && (ft_strchr(PRECISION, *(*str)) || \
				ft_strchr(DEC, *(*str)) || ft_strchr(FLAGS, *(*str)) || \
				ft_strchr(WIDTH, *(*str))))
	{
		if (*(*str) == '.')
		{
			var_p->p_dot = 1;
			var_p->p_int = 0;
		}
		(*str)++;
		if (var_p->p_dot == 1 && (ft_strchr(DEC, *(*str)) || *(*str) == '*'))
		{
			if (var_p->p_int == 0)
			{
				var_p->p_int = inputed_dec(ap, str);
				(*str)++;
			}
		}
	}
}

t_property	*make_struct(va_list *ap, char **str)
{
	t_property	*var_p;

	var_p = (t_property *)ft_calloc(1, sizeof(t_property));
	if (var_p == NULL)
		return (NULL);
	find_flags(var_p, str);
	find_width(ap, var_p, str);
	find_precision(ap, var_p, str);
	if (*(*str) != 0 && ft_strchr(TYPES, *(*str)) != 0)
	{
		var_p->print_type = *(*str);
		var_p->data_type = set_data_type(*str);
		if (*(var_p->data_type) == '%')
			var_p->var = (long long)'%';
		else if (*(var_p->data_type) == '4')
			var_p->var = (long long)va_arg(*ap, int);
		else
			var_p->var = (long long)va_arg(*ap, void *);
		if (var_p->print_type == 's' && (void *)var_p->var == NULL)
			var_p->var = (long long)("(null)");
		var_p->len_origin = cal_len(var_p->var, var_p->print_type);
		adjust_struct(var_p);
		*str = (*str) + 1;
	}
	return (var_p);
}
