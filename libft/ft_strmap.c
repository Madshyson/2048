/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 17:14:48 by tguillot          #+#    #+#             */
/*   Updated: 2016/01/26 18:00:16 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		a;
	int		b;
	char	*str;

	a = 0;
	b = ft_strlen(s);
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (b + 1))))
		return (NULL);
	while (s[a] != '\0')
	{
		str[a] = f(s[a]);
		a++;
	}
	str[b] = '\0';
	return (str);
}
