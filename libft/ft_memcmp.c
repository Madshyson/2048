/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 20:03:53 by tguillot          #+#    #+#             */
/*   Updated: 2016/01/26 17:24:28 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			a;
	unsigned char	*str;
	unsigned char	*str2;

	a = 0;
	str = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (a < n)
	{
		if (str[a] != str2[a])
			return (str[a] - str2[a]);
		a++;
	}
	return (0);
}
