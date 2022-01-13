/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 17:47:54 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/13 18:30:07 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"
# define TYPES "cspdiuxX%"

typedef struct s_property
{
	char	print_type;
	char	*data_type;
}	t_property;

int			ft_printf(const char *str, ...);
t_property	*make_struct(char **str);
char		*set_data_type(char *str);
int			print_var(va_list *ap, t_property *var_p);
int			cal_len(long long var, char *type);
#endif
