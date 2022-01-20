/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_pointer_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:49:16 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/18 18:24:35 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf_bonus.h"

static void	address_hex(t_property *var_p, char *converted_add)
{
	unsigned long long	dec_add;
	int					idx;

	idx = 1;
	dec_add = (unsigned long long)(var_p->var);
	ft_bzero(converted_add, var_p->len_origin + 1);
	converted_add[0] = '0';
	converted_add[1] = 'x';
	if (dec_add == 0)
	{
		converted_add[2] = '0';
		return ;
	}
	while (dec_add != 0)
	{
		converted_add[var_p->len_origin - idx] = LOWER_HEX[(dec_add % 16)];
		dec_add = dec_add / 16;
		idx++;
	}
}

int	print_p(t_property *var_p, char *frame)
{
	char	*converted_add;
	int		start_idx;

	converted_add = (char *)malloc(var_p->len_origin + 1);
	if (converted_add == NULL)
		return (-1);
	address_hex(var_p, converted_add);
	start_idx = var_p->full_size - var_p->len_origin;
	if (var_p->f_minus)
		ft_memmove(frame, converted_add, var_p->len_origin);
	else
		ft_memmove(frame + start_idx, converted_add, var_p->len_origin);
	ft_putstr_fd(frame, 1);
	return (var_p->full_size);
}
