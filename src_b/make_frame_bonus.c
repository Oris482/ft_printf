/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_frame_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:32:56 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/18 18:45:28 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

char	*make_frame(t_property *var_p)
{
	int		option_len;
	char	*frame;

	option_len = var_p->f_plus + var_p->f_space + var_p->f_pound;
	if (var_p->w_int || var_p->p_dot)
	{
		if (var_p->w_int > var_p->p_int + option_len)
			var_p->full_size = var_p->w_int;
		else
			var_p->full_size = var_p->p_int + option_len;
	}
	else
		var_p->full_size = var_p->len_origin + option_len;
	frame = (char *)malloc(var_p->full_size + 1);
	if (frame == NULL)
		return (NULL);
	if (var_p->f_zero)
		ft_memset(frame, '0', var_p->full_size);
	else if (var_p->w_int)
		ft_memset(frame, ' ', var_p->full_size);
	frame[var_p->full_size] = '\0';
	return (frame);
}
