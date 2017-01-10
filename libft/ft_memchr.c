/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 19:51:27 by tguillot          #+#    #+#             */
/*   Updated: 2015/11/28 15:22:08 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*str;

	a = 0;
	str = (unsigned char *)s;
	while (a < n)
	{
		if (str[a] == (unsigned char)c)
			return (&str[a]);
		a++;
	}
	return (NULL);
}
