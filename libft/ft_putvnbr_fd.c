/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:31:40 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/11 15:05:45 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_sepptr(long long n, char *base, int n_base, int fd)
{
	if (n < n_base)
		ft_putchar_fd(base[n], fd);
	else
	{
		ft_sepptr(n / n_base, base, n_base, fd);
		ft_putchar_fd(base[n % n_base], fd);
	}
}

static long long	set_minvalue(char *type)
{
	long long	minvalue;

	if (*type == 'l')
		minvalue = -9223372036854775807;
	else
		minvalue = -2147483648;
	return (minvalue);
}

static char	*set_base(char *type)
{
	if (*type == 'x')
		return (LOWER_HEX);
	else if (*type == 'X')
		return (UPPER_HEX);
	else
		return (DEC);
}

static long long	set_num(long long n, char *type)
{
	if (*type == 'l')
		return (n);
	else if (*type == 'u' || *type == 'x' || *type == 'X')
		return ((unsigned int)n);
	else
		return ((int)n);
}

void	ft_putvnbr_fd(long long n, char *type, int fd)
{
	long long	minvalue;
	char		tail;
	char		*base;
	int			n_base;

	tail = -1;
	n = set_num(n, type);
	minvalue = set_minvalue(type);
	base = set_base(type);
	n_base = ft_strlen(base);
	if (n < 0)
	{
		if (n == minvalue)
		{
			tail = base[-1 * (n % n_base)];
			n = n / n_base;
		}
		n *= (-1);
		ft_putchar_fd('-', fd);
	}
	ft_sepptr(n, base, n_base, fd);
	if (tail > 0)
		ft_putchar_fd(tail, 1);
}
