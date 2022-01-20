/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_string_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:42:41 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/18 19:25:40 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

int	print_s(t_property *var_p, char *frame)
{
	char	*str;
	int		start_idx;

	str = (char *)var_p->var;
	start_idx = var_p->full_size - var_p->len_origin;
	if (var_p->f_minus)
		ft_memmove(frame, str, var_p->len_origin);
	else
		ft_memmove(frame + start_idx, str, var_p->len_origin);
	ft_putstr_fd(frame, 1);
	return (var_p->full_size);
}
