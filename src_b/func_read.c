/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:18:27 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/21 21:41:19 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

int	func_read(int *status, const char *str, t_prop **var_p, va_list ap)
{
	int	(*func_readlist[4])(int *, const char *, t_prop **, va_list);

	if (*status == 0)
		return (func_write(status, str, var_p));
	func_readlist[1] = func_flags;
	func_readlist[2] = func_width;
	func_readlist[3] = func_precision;
	return (func_readlist[*status](status, str, var_p, ap));
}
