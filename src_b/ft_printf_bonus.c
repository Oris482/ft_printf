/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:48:05 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/13 19:24:42 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

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
			if (var_p->data_type != NULL && *(var_p->data_type) != 0)
				cnt += print_var(&ap, var_p);
			free(var_p);
		}
	}
	va_end(ap);
	return (cnt);
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

void	address_hex(void *address)
{
	unsigned long long	dec_add;
	int					idx;
	char				converted_add[17];

	idx = 0;
	dec_add = (unsigned long long)address;
	ft_bzero(converted_add, 17);
	write(1, "0x", 2);
	if (dec_add == 0)
		write(1, "0", 1);
	while (dec_add != 0)
	{
		converted_add[idx] = LOWER_HEX[(dec_add % 16)];
		dec_add = dec_add / 16;
		idx++;
	}
	while (idx-- > 0)
		write(1, &converted_add[idx], 1);
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
	if (var_p->print_type == 's' && (void *)var == NULL)
		var = (long long)("(null)");
	if (var_p->print_type == 's')
		ft_putstr_fd((char *)var, 1);
	else if (var_p->print_type == 'c')
		write(1, &var, 1);
	else if (var_p->print_type == 'p')
		address_hex((void *)var);
	else
		ft_putvnbr_fd(var, &(var_p->print_type), 1);
	cnt = cal_len(var, &(var_p->print_type));
	return (cnt);
}
