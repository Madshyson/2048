/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:44:03 by tguillot          #+#    #+#             */
/*   Updated: 2015/12/01 21:24:49 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int a;

	a = ft_strlen((char*)s);
	while (0 != a && s[a] != (char)c)
		a--;
	if (s[a] == (char)c)
		return ((char *)(s + a));
	return (NULL);
}
