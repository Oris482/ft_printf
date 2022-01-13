/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:47:41 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/13 18:30:35 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include "../libft/libft.h"
# define FLAGS "0-+ #"
# define PRECISION "."
# define TYPES "cspdiuxX%"

typedef struct s_property
{
	int		len;
	char	print_type;
	char	*data_type;
}	t_property;

int			ft_printf(const char *str, ...);
t_property	*make_struct(char **str);
char		*set_data_type(char *str);
int			print_var(va_list *ap, t_property *var_p);
int			cal_len(long long var, char *type);
#endif
