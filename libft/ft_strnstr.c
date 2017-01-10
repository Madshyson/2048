/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 20:43:16 by tguillot          #+#    #+#             */
/*   Updated: 2015/11/26 21:28:01 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t a;
	size_t b;
	size_t c;

	a = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[a] != '\0' && a != n)
	{
		b = a;
		c = 0;
		while (s2[c] == s1[b] && b != n)
		{
			c++;
			b++;
			if (s2[c] == '\0')
				return ((char *)(s1 + a));
		}
		a++;
	}
	return (NULL);
}
