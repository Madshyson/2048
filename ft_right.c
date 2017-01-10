/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_right.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 11:03:39 by mlavanan          #+#    #+#             */
/*   Updated: 2016/01/31 22:35:19 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static int		sum(int **tab, int i, int j)
{
	tab[i][j + 1] = (tab[i][j + 1] * 2);
	tab[i][j] = -1;
	return (0);
}

static int		swapr(int **tab, int i, int j)
{
	tab[i][j + 1] = tab[i][j];
	tab[i][j] = -1;
	return (0);
}

static int		**sortr(int **tab, int size, int i, int j)
{
	int sort;

	sort = 0;
	while (!sort)
	{
		sort = 1;
		i = size - 1;
		while (i >= 0)
		{
			while (j >= 0)
			{
				if (tab[i][j] != -1 && tab[i][j + 1] == -1)
					sort = swapr(tab, i, j);
				j--;
			}
			i--;
			j = size - 2;
		}
	}
	return (tab);
}

static int		**addr(int **tab, int size, int i, int j)
{
	int ret;

	while (i >= 0)
	{
		j = size - 2;
		while (j >= 0)
		{
			if (tab[i][j + 1] == tab[i][j] && tab[i][j] != -1)
				ret = sum(tab, i, j);
			j--;
		}
		i--;
	}
	return (tab);
}

int				**ft_right(int **tab, int size)
{
	int i;
	int j;

	i = size - 1;
	j = size - 2;
	tab = sortr(tab, size, i, j);
	tab = addr(tab, size, i, j);
	tab = sortr(tab, size, i, j);
	return (tab);
}
