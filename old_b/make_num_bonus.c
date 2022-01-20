/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_num_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:10:29 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/18 20:41:38 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

static	void	ft_sepptr(long long n, char *base, int n_base, \
		char **converted_num)
{
	if (n < n_base)
		*(*converted_num) = base[n];
	else
	{
		ft_sepptr(n / n_base, base, n_base, converted_num);
		*(*converted_num) = base[n % n_base];
	}
}

static char	*set_base(char type)
{
	if (type == 'x')
		return (LOWER_HEX);
	else if (type == 'X')
		return (UPPER_HEX);
	else
		return (DEC);
}

static long long	set_num(long long n, char type)
{
	if (type == 'l')
		return (n);
	else if (type == 'u' || type == 'x' || type == 'X')
		return ((unsigned int)n);
	else
		return ((int)n);
}

static void	add_flags(t_property *var_p, char **converted_num)
{
	if (var_p->f_plus == 1)
		*(*converted_num)++ = '+';
	if (var_p->f_space == 1)
		*(*converted_num)++ = ' ';
	if (var_p->f_pound == 2)
	{
		*(*converted_num)++ = '0';
		if (var_p->print_type == 'x')
			*(*converted_num)++ = 'x';
		else
			*(*converted_num)++ = 'X';
	}
}

char	*make_num(t_property *var_p, char **converted_num)
{
	long long	n;
	char		*base;
	int			n_base;
	char		*ret;
	int			cnt_zero;

	n = set_num(var_p->var, var_p->print_type);
	base = set_base(var_p->print_type);
	n_base = ft_strlen(base);
	ret = *converted_num;
	cnt_zero = var_p->p_int - var_p->len_origin;
	if (n < 0)
	{
		n *= (-1);
		*((*converted_num)++) = '-';
	}
	add_flags(var_p, converted_num);
	while (cnt_zero-- > 0)
		*((*converted_num)++) = '0';
	ft_sepptr(n, base, n_base, converted_num);
	return (ret);
}
