/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkloose.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 14:13:39 by mlavanan          #+#    #+#             */
/*   Updated: 2016/01/31 19:00:06 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int				ft_checkloose(int **tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (ft_test(tab, size, i, j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
