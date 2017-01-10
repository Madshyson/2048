/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 23:36:26 by mlavanan          #+#    #+#             */
/*   Updated: 2016/01/31 17:33:06 by mlavanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static int	**raz(int **tab, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			tab[i][j] = -1;
			j++;
		}
		i++;
		j = 0;
	}
	return (tab);
}

int			**ft_tabinit(int size)
{
	int **tab;
	int i;

	i = 0;
	tab = (int **)malloc(sizeof(int *) * size);
	while (i < size)
	{
		tab[i] = (int *)malloc(sizeof(int) * size);
		i++;
	}
	tab = raz(tab, size);
	tab = ft_addrpos(tab, size);
	tab = ft_addrpos(tab, size);
	return (tab);
}
