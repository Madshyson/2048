/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:22:28 by tguillot          #+#    #+#             */
/*   Updated: 2015/11/28 10:30:36 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int a;
	int c;
	int result;

	a = 0;
	c = 1;
	result = 0;
	while (str[a] == ' ' || str[a] == '\t' || str[a] == '\n' || str[a] == '\r'
				|| str[a] == '\v' || str[a] == '\f')
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			c = -1;
		a++;
	}
	while (ft_isdigit(str[a]))
	{
		result = result * 10;
		result = result + (str[a] - '0');
		a++;
	}
	return (result * c);
}
