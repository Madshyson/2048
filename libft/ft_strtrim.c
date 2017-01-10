/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 17:36:12 by tguillot          #+#    #+#             */
/*   Updated: 2016/01/26 18:12:37 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		a;
	int		b;
	int		c;
	char	*str;

	a = 0;
	c = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	while (s[a] != '\0')
		a++;
	b = a;
	a--;
	while ((s[a] == ' ' || s[a] == '\n' || s[a] == '\t') && a >= 0)
	{
		c++;
		a--;
	}
	if (!(str = (char *)malloc(sizeof(char) * ((b - c) + 1))))
		return (NULL);
	str[b - c] = '\0';
	return (ft_strncpy(str, s, b - c));
}
