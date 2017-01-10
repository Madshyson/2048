/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_up.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 10:43:00 by mlavanan          #+#    #+#             */
/*   Updated: 2016/01/31 22:35:44 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static int		sum(int **tab, int i, int j)
{
	tab[i - 1][j] = (tab[i - 1][j] * 2);
	tab[i][j] = -1;
	return (0);
}

static int		swapu(int **tab, int i, int j)
{
	tab[i - 1][j] = tab[i][j];
	tab[i][j] = -1;
	return (0);
}

static int		**sortu(int **tab, int size, int i, int j)
{
	int sort;

	sort = 0;
	while (!sort)
	{
		sort = 1;
		i = 1;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				if (tab[i][j] != -1 && tab[i - 1][j] == -1)
					sort = swapu(tab, i, j);
				j++;
			}
			i++;
		}
	}
	return (tab);
}

static int		**addu(int **tab, int size, int i, int j)
{
	int ret;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i - 1][j] == tab[i][j] && tab[i][j] != -1)
				ret = sum(tab, i, j);
			j++;
		}
		i++;
	}
	return (tab);
}

int				**ft_up(int **tab, int size)
{
	int i;
	int j;

	i = 1;
	j = 0;
	tab = sortu(tab, size, i, j);
	tab = addu(tab, size, i, j);
	tab = sortu(tab, size, i, j);
	return (tab);
}
