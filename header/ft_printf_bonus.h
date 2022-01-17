/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:47:41 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/17 19:07:02 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include "../libft/libft.h"
# define FLAGS "0-+ #"
# define WIDTH "*"
# define PRECISION "."
# define TYPES "cspdiuxX%"
//testfunc
# include <stdio.h>

typedef struct s_property
{
	long long	var;
	int			len_origin;
	int			f_zero;
	int			f_minus;
	int			f_plus;
	int			f_space;
	int			f_pound;
	int			w_int;
	int			p_dot;
	int			p_int;
	char		print_type;
	char		*data_type;
}	t_property;

int			ft_printf(const char *str, ...);
char		*set_data_type(char *str);
void		address_hex(void *address);
int			print_var(t_property *var_p);
int			cal_len(long long var, char type);
void		adjust_struct(t_property *var_p);
t_property	*make_struct(va_list *ap, char **str);
#endif
