/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:20:23 by tguillot          #+#    #+#             */
/*   Updated: 2015/11/28 15:21:39 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			a;
	unsigned char	*str;
	unsigned char	*str2;
	unsigned char	uc;

	a = 0;
	str = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	uc = (unsigned char)c;
	while (a < n)
	{
		str[a] = str2[a];
		if (str2[a] == uc)
			return (&str[a + 1]);
		a++;
	}
	return (NULL);
}
