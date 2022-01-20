/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:53:58 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/20 21:40:18 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include "../libft/libft.h"
# define FLAGS "0-+ #."
# define ONENINE "123456789"
# define ZERONINE "0123456789"
# define TYPES "cspdiuxX%"

typedef struct s_property
{
	long long	var;
	int			flags;
	int			reading_width;
	int			width;
	int			precision;
}	t_property;

int			ft_printf(const char *str, ...);
int			cal_len(long long var, char *type);
#endif
