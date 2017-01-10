/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 12:18:48 by tguillot          #+#    #+#             */
/*   Updated: 2016/01/27 12:39:44 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int nb, int power)
{
	int i;
	int tmp;

	i = 0;
	tmp = 1;
	if (power > 0)
	{
		while (i < power)
		{
			tmp = tmp * nb;
			i++;
		}
		return (tmp);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
