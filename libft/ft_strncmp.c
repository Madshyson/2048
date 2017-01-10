/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 09:58:47 by tguillot          #+#    #+#             */
/*   Updated: 2015/11/28 15:27:33 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		a;
	size_t	b;

	a = 0;
	b = 0;
	if (n == 0)
		return (0);
	while (s1[a] == s2[a])
	{
		if (b == n - 1)
			return (0);
		if (s1[a] == '\0' && s2[a] == '\0')
			return (0);
		a++;
		b++;
	}
	return (((unsigned char *)(s1))[a] - ((unsigned char *)(s2))[a]);
}
