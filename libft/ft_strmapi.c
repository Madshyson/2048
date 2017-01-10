/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 17:16:26 by tguillot          #+#    #+#             */
/*   Updated: 2016/01/26 18:03:52 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				a;
	int				b;
	unsigned int	c;
	char			*str;

	a = 0;
	b = ft_strlen(s);
	c = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (b + 1))))
		return (NULL);
	while (s[a] != '\0')
	{
		str[a] = f(c, s[a]);
		a++;
		c++;
	}
	str[b] = '\0';
	return (str);
}
