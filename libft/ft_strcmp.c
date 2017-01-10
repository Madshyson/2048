/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 08:49:05 by tguillot          #+#    #+#             */
/*   Updated: 2015/12/01 21:05:49 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int a;

	a = 0;
	while (s1[a] == s2[a])
	{
		if (s1[a] == '\0' && s2[a] == '\0')
			return (0);
		a++;
	}
	if (s1[a] != s2[a])
		return (((unsigned char*)s1)[a] - ((unsigned char*)s2)[a]);
	return (0);
}
