/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 22:30:18 by tguillot          #+#    #+#             */
/*   Updated: 2015/12/01 22:32:43 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iterative_power(int nb, int power)
{
	int pow;
	int result;

	pow = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (pow < power)
	{
		result = result * nb;
		pow++;
	}
	return (result);
}
