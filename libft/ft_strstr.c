/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:34:55 by tguillot          #+#    #+#             */
/*   Updated: 2015/11/28 15:27:58 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int a;
	int b;
	int c;

	a = 0;
	c = 0;
	if (s2[0] == '\0')
		return ((char *)(s1));
	while (s1[a] != '\0')
	{
		b = a;
		c = 0;
		while (s2[c] == s1[b])
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
