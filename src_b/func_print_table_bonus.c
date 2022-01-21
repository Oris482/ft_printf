/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_print_table_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:36:29 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/21 21:44:27 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_percent(t_prop **var_p)
{
	(*var_p)->var = (long long)'%';
}

int	print_c(int	type, t_prop **var_p, va_list *ap)
{
	(*var_p)->var = (long long)va_arg(*ap, int);
}

int	print_s(int type, t_prop **var_p, va_list *ap)
{
	(*var_p)->var = (long long)va_arg(*ap, void *);
	if ((void *)((*var_p)->var) == NULL)
		(*var_p)->var = (long long)("(null)");
}

int	print_p(int type, t_prop **var_p, va_list *ap)
{
	(*var_p)->var = (long long)va_arg(*ap, void *);
}

int	print_number(int type, t_prop **var_p, va_list *ap)
{
	(*var_p)->var = (long long)va_arg(*ap, int);
}
