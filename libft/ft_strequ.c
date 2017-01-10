/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 17:18:50 by tguillot          #+#    #+#             */
/*   Updated: 2016/01/26 18:08:16 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int a;

	a = ft_strcmp(s1, s2);
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (a == 0)
		return (1);
	return (0);
}
