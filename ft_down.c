/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_down.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 10:50:37 by mlavanan          #+#    #+#             */
/*   Updated: 2016/01/31 22:39:12 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static int		sum(int **tab, int i, int j)
{
	tab[i + 1][j] = (tab[i + 1][j] * 2);
	tab[i][j] = -1;
	return (0);
}

static int		swapd(int **tab, int i, int j)
{
	tab[i + 1][j] = tab[i][j];
	tab[i][j] = -1;
	return (0);
}

static int		**sortd(int **tab, int size, int i, int j)
{
	int sort;

	sort = 0;
	while (!sort)
	{
		sort = 1;
		i = size - 2;
		while (i >= 0)
		{
			while (j >= 0)
			{
				if (tab[i][j] != -1 && tab[i + 1][j] == -1)
					sort = swapd(tab, i, j);
				j--;
			}
			i--;
			j = size - 1;
		}
	}
	return (tab);
}

static int		**addd(int **tab, int size, int i, int j)
{
	int ret;

	while (i >= 0)
	{
		j = size - 1;
		while (j >= 0)
		{
			if (tab[i + 1][j] == tab[i][j] && tab[i][j] != -1)
				ret = sum(tab, i, j);
			j--;
		}
		i--;
	}
	return (tab);
}

int				**ft_down(int **tab, int size)
{
	int i;
	int j;

	i = size - 2;
	j = size - 1;
	tab = sortd(tab, size, i, j);
	tab = addd(tab, size, i, j);
	tab = sortd(tab, size, i, j);
	return (tab);
}
