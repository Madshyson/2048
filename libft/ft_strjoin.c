/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 17:23:44 by tguillot          #+#    #+#             */
/*   Updated: 2016/01/27 14:01:36 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t		b;
	size_t		c;
	size_t		d;
	char		*str;

	b = ft_strlen(s2);
	c = 0;
	d = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + b + 1))))
		return (NULL);
	while (c < ft_strlen(s1))
	{
		str[c] = s1[c];
		c++;
	}
	while (c <= (ft_strlen(s1) + b))
	{
		str[c] = s2[d];
		c++;
		d++;
	}
	str[ft_strlen(s1) + b] = '\0';
	return (str);
}
