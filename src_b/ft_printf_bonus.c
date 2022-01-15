/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:48:05 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/15 18:58:15 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

static int testfunc_print_struct(t_property *var_p)
{
	printf("\n------------\nlen_origin = %d\n", var_p->len_origin);
	printf("f_zero = %d\n", var_p->f_zero);
	printf("f_minus = %d\n", var_p->f_minus);
	printf("f_plus = %d\n", var_p->f_plus);
	printf("f_space = %d\n", var_p->f_space);
	printf("f_pound = %d\n", var_p->f_pound);
	printf("w_int = %d\n", var_p->w_int);
	printf("p_dot = %d\n", var_p->p_dot);
	printf("p_int = %d\n", var_p->p_int);
	printf("print_type = %c\n", var_p->print_type);
	printf("data_type = %s\n", var_p->data_type);
	return (0);
}

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
			var_p = make_struct(ap, (char **)&str);
			if (var_p == NULL)
				return (-1);
			//testfunc
			testfunc_print_struct(var_p);
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
		var = (long long)'%';
	else if (*(var_p->data_type) == '4')
		var = (long long)va_arg(*ap, int);
	else
		var = (long long)va_arg(*ap, void *);
	if (var_p->print_type == 's' && (void *)var == NULL)
		var = (long long)("(null)");
	if (var_p->print_type == 's')
		ft_putstr_fd((char *)var, 1);
	else if (var_p->print_type == 'c' || var_p->print_type == '%')
		write(1, &var, 1);
	else if (var_p->print_type == 'p')
		address_hex((void *)var);
	else
		ft_putvnbr_fd(var, &(var_p->print_type), 1);
	cnt = cal_len(var, &(var_p->print_type));
	return (cnt);
}
