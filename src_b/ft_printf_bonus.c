/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:48:05 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/18 19:28:52 by jaesjeon         ###   ########.fr       */
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
	printf("return value = %d\n", var_p->full_size);
	write(1, "var = ", 6);
	print_var(var_p);
	printf("\n----------------------------\n");
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
			var_p = make_struct(&ap, (char **)&str);
			if (var_p == NULL)
				return (-1);
			//testfunc
			testfunc_print_struct(var_p);
			if (var_p->data_type != NULL && *(var_p->data_type) != 0)
				cnt += print_var(var_p);
			free(var_p);
		}
	}
	va_end(ap);
	return (cnt);
}

int	print_var(t_property *var_p)
{
	int			cnt;
	long long	var;
	char		*frame;

	frame = make_frame(var_p);
	if (frame == NULL)
		return (-1);
	var = var_p->var;
	if (var_p->print_type == 's')
		print_s(var_p, frame);
	else if (var_p->print_type == 'c')
		print_c(var_p, frame);
	else if (var_p->print_type == 'c' || var_p->print_type == '%')
		write(1, &var, 1);
	else if (var_p->print_type == 'p')
		print_p(var_p, frame);
	else
		print_num(var_p, frame);
	cnt = var_p->len_origin;
	return (cnt);
}
