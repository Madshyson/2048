/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkenum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 22:00:18 by tguillot          #+#    #+#             */
/*   Updated: 2016/01/31 23:08:01 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		checkenum(void)
{
	int a;

	a = WIN_VALUE;
	if (a <= 1)
	{
		ft_putendl("Wrong entry to WIN_VALUE, is not a multiple of 2");
		return (0);
	}
	while (a > 2)
	{
		if ((a % 2) != 0)
		{
			ft_putendl("Wrong entry to WIN_VALUE, is not a multiple of 2");
			return (0);
		}
		a = a / 2;
	}
	return (1);
}
