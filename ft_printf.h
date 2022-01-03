/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 17:47:54 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/03 16:27:53 by jaesjeon         ###   ########.fr       */
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

#endif
