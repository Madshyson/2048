/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hasmoved.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 17:40:08 by mlavanan          #+#    #+#             */
/*   Updated: 2016/01/31 15:32:30 by mlavanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		ft_hasmoved(int **tab, int **prev, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i][j] != prev[i][j])
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
