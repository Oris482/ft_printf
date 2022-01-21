/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:42:20 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/01/21 20:43:14 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strwchr(const char *s, int c)
{
	int idx;

	idx = 0;
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (-1);
		s++;
		idx++;
	}
	return (idx);
}
