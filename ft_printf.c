/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 17:47:23 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/05 16:47:54 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	int			cnt;
	t_property	*var_p;

	va_start(ap, str);
	cnt = 0;
	while (*str != '\0')
	{
		while (*str != '%' && *str != '\0')
		{
			write(1, str++, 1);
			cnt++;
		}
		if (*str == '%')
		{
			var_p = make_struct((char **)&str);
			if (var_p == NULL)
				return (-1);
			if (*(var_p->data_type) != 0)
				cnt += print_var(&ap, var_p);
			free(var_p);
		}
	}
	return (cnt);
}

t_property	*make_struct(char **str)
{
	t_property	*var_p;

	var_p = (t_property *)ft_calloc(1, sizeof(t_property));
	if (var_p == NULL)
		return (NULL);
	if (ft_strchr(TYPES, *((*str) + 1)) != 0)
	{
		var_p->print_type = *((*str) + 1);
		var_p->data_type = set_data_type((*str) + 1);
		*str = (*str) + 2;
	}
	else
		(*str)++;
	return (var_p);
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

int	address_hex(void *address)
{
	long long	dec_add;
	int			cnt;

	cnt = 2;
	dec_add = (long long)address;
	write(1, "0x", 2);
	ft_putvnbr_fd(dec_add, "p", 1);
	return (cnt + cal_len(dec_add, "p"));
}

int	print_var(va_list *ap, t_property *var_p)
{
	int			cnt;
	long long	var;

	if (*(var_p->data_type) == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	if (*(var_p->data_type) == '4')
		var = (long long)va_arg(*ap, int);
	else
		var = (long long)va_arg(*ap, void *);
	if (var_p->print_type == 's')
		ft_putstr_fd((char *)var, 1);
	else if (var_p->print_type == 'c')
		write(1, &var, 1);
	else if (var_p->print_type == 'p')
		return (address_hex((void *)var));
	else
		ft_putvnbr_fd(var, &(var_p->print_type), 1);
	cnt = cal_len(var, &(var_p->print_type));
	return (cnt);
}
