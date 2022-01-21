/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:53:58 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/21 21:44:55 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include "../libft/libft.h"
# define FLAGS "0-+ #."
# define ONENINE "123456789"
# define ZERONINE "0123456789"
# define TYPES "%cspdiuxX"

typedef struct s_prop
{
	long long	var;
	int			flags;
	int			reading_width;
	int			width;
	int			precision;
}	t_prop;

int	ft_printf(const char *str, ...);

int	func_write(int *status, const char *str, t_prop **var_p);
int	func_flags(int *status, const char *str, t_prop **var_p, va_list *ap);
int	func_width(int *status, const char *str, t_prop **var_p, va_list *ap);
int	func_precision(int *status, const char *str, t_prop **var_p, va_list *ap);
int	func_print(int *status, const char *str, t_prop **var_p, va_list *ap);
int	func_read(int *status, const char *str, t_prop **var_p, va_list *ap);

int	print_percent(t_prop **var_p);
int	print_c(int type, t_prop **var_p, va_list *ap);
int	print_s(int type, t_prop **var_p, va_list *ap);
int	print_p(int type, t_prop **var_p, va_list *ap);
int	print_number(int type, t_prop **var_p, va_list *ap);
int	func_print(int *status, const char *str, t_prop **var_p, va_list *ap);

int	cal_len(long long var, char *type);
#endif
