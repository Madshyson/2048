/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:25:57 by tguillot          #+#    #+#             */
/*   Updated: 2015/11/28 15:25:53 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t a;
	size_t b;
	size_t c;

	a = ft_strlen(src);
	b = ft_strlen(dst);
	if (b < size)
	{
		c = size - b - 1;
		ft_strncat(dst, src, c);
		dst[b + c] = '\0';
		return (a + b);
	}
	return (size + a);
}
