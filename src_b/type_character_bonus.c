/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_character_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:31:13 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/18 18:24:59 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

int	print_c(t_property *var_p, char *frame)
{
	if (var_p->f_minus)
		frame[0] = (char)var_p->var;
	else
		frame[var_p->full_size - 1] = (char)var_p->var;
	ft_putstr_fd(frame, 1);
	return (var_p->full_size);
}
