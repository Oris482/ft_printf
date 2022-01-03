/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 17:47:54 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/03 20:40:06 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# define FLAGS "0-+ #"
# define PRECISION "."
# define TYPES "cspdiuxX"

typedef struct s_property
{
	int		len;
	char	print_type;
	char	*data_type;
}	t_property;

int	ft_printf(char *str, ...);
t_property	*make_struct(char **origin);
char	*set_data_type(char *str);
int	print_var(long long var, t_property *var_p);


#endif
