/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 17:47:23 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/03 19:14:51 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf(char *str, ...)
{
	va_list 	ap;
	int			cnt;
	long long	var;
	t_property	var_p;

	va_start(ap, str);
	var = va_arg(ap, str);
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
			var_p = make_struct(&str, var);
			if (var_p == NULL)
				return (NULL);
			cnt += print_var(var, var_p);
		}
	}
}

t_property	*make_struct(char **origin, long long var)
{
	t_property	*var_p;
	char		*str;

	var_p = (t_property *)ft_calloc(1, sizeof(t_property));
	if (var_p == NULL)
		return (NULL);
	str = *origin;
	if (ft_strchr(TYPES, *(str + 1)) != 0)
	{
		var_p.print_type = *(str +1);
		var_p.data_type = set_data_type(str + 1);
		str = str + 2;
	}
	else if (*(str + 1) == '%')
	{
		write(1, str, 1);
		str = str + 2;
		return (1);
	}
	else
		str++;
	return (0);
}

char	*set_data_type(char *str)
{
	if (*str == 'c' || *str == 'd' || *str == 'i' || *str == 'u' || *str == 'x'\
			*str == 'X')
		return ("int");
	else if (*str == 's' || *str == 'p')
		return ("void *");
}

int	print_var(long long var, t_property var_p)
{
	if (var_p.print_type == 's')
	{
		ft_putstr_fd(char *(var), 1);
		return (ft_strlen(const char *(var)));
	}
	return (0);
}
