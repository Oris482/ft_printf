/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:19:42 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/21 21:44:01 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

int	func_print(int *status, const char *str, t_prop **var_p, va_list *ap)
{
	int	type;
	int	(*func_printlist[9])(int, t_prop **, va_list);

	type = ft_strwchr(TYPES, *str);
	if (type == 0)
		return (print_percent(var_p));
	func_printlist[1] = print_c;
	func_printlist[2] = print_s;
	func_printlist[3] = print_p;
	func_printlist[4] = print_number;
	func_printlist[5] = print_number;
	func_printlist[6] = print_number;
	func_printlist[7] = print_number;
	func_printlist[8] = print_number;
	*status = 0;
	return (func_printlist[type](type, var_p, &ap)); 
}
