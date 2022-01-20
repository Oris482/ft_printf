/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_numbers_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:04:54 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/18 20:30:35 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

int	print_num(t_property *var_p, char *frame)
{
	char	*converted_num;
	int		len;
	int		option_len;
	int		idx;
	int		start_p;

	option_len = var_p->f_plus + var_p->f_space + var_p->f_pound;
	idx = 0;
	if (var_p->p_dot == 1)
		len = var_p->p_int + option_len;
	else
		len = var_p->len_origin + option_len;
	converted_num = (char *)ft_calloc(len + 2, 1);
	if (converted_num == NULL)
		return (-1);
	converted_num = make_num(var_p, &converted_num);
	start_p = var_p->full_size - ft_strlen(converted_num);
	if (var_p->f_minus == 1)
		ft_memmove(frame, converted_num, ft_strlen(converted_num));
	else
		ft_memmove(frame + start_p, converted_num, ft_strlen(converted_num));
	free(converted_num);
	ft_putstr_fd(frame, 1);
	return (var_p->full_size);
}
