/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 17:20:06 by tguillot          #+#    #+#             */
/*   Updated: 2015/11/29 14:40:08 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t len)
{
	int a;

	if (s1 == NULL || s2 == NULL)
		return (0);
	a = ft_strncmp(s1, s2, len);
	if (a == 0)
		return (1);
	else
		return (0);
}
