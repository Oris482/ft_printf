/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:41:44 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/15 17:56:26 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

static int	inputed_dec(va_list ap, char **str)
{
	char	*c;
	int		ret;

	c = *str;
	ret = 0;
	if (*c == '*')
		ret = (int)va_arg(ap, int);
	else
	{
		while (*c >= '0' && *c <= '9')
		{
			ret = ret * 10 + (*c - 48);
			(*str)++;
		}
		(*str)--;
	}
	return (ret);
}

static void	find_flags(t_property *var_p, char **str)
{
	char	*c;

	c = *str;
	(*str)++;
	while (*c != '\0' && ft_strchr(FLAGS, *c))
	{
		if (*c == '0')
			var_p->f_zero = 1;
		else if (*c == '-')
			var_p->f_minus = 1;
		else if (*c == '+')
			var_p->f_plus = 1;
		else if (*c == ' ')
			var_p->f_space = 1;
		else if (*c == '#')
			var_p->f_pound = 1;
		(*str)++;
	}
}

static void	find_width(va_list ap, t_property *var_p, char **str)
{
	char	*c;
	int		cal_wid;

	c = *str;
	while (*c != '\0' && (ft_strchr(WIDTH, *c) || ft_strchr(DEC, *c) || \
			ft_strchr(FLAGS, *c)))
	{
		cal_wid = 0;
		if (ft_strchr(FLAGS, *c))
			;
		else
			cal_wid = inputed_dec(ap, str);
		(*str)++;
		var_p->w_int = cal_wid;
	}
}

static void	find_precision(va_list ap, t_property *var_p, char **str)
{
	char	*c;

	c = *str;
	if (*c != '*')
		return ;
	while (*c != '\0' && (ft_strchr(PRECISION, *c) || ft_strchr(FLAGS, *c) || \
			ft_strchr(WIDTH, *c)))
	{
		var_p->p_dot = 1;
		if (*c == '.')
			var_p->p_int = 0;
		(*str)++;
		if (ft_strchr(DEC, *c) || *c == '*')
			var_p->p_int = inputed_dec(ap, str);
		(*str)++;
	}
}

t_property	*make_struct(va_list ap, char **str)
{
	t_property	*var_p;

	var_p = (t_property *)ft_calloc(1, sizeof(t_property));
	if (var_p == NULL)
		return (NULL);
	find_flags(var_p, str);
	find_width(ap, var_p, str);
	find_precision(ap, var_p, str);
	if (*((*str) + 1) != 0 && ft_strchr(TYPES, *((*str) + 1)) != 0)
	{
		var_p->print_type = *((*str) + 1);
		var_p->data_type = set_data_type((*str) + 1);
		*str = (*str) + 2;
	}
	else
		(*str)++;
	return (var_p);
}
