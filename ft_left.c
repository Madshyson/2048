/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_left.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 00:35:56 by mlavanan          #+#    #+#             */
/*   Updated: 2016/01/31 22:34:57 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static int		sum(int **tab, int i, int j)
{
	tab[i][j - 1] = (tab[i][j - 1] * 2);
	tab[i][j] = -1;
	return (0);
}

static int		swapl(int **tab, int i, int j)
{
	tab[i][j - 1] = tab[i][j];
	tab[i][j] = -1;
	return (0);
}

static int		**sortl(int **tab, int size, int i, int j)
{
	int sort;

	sort = 0;
	while (!sort)
	{
		sort = 1;
		i = 0;
		while (i < size)
		{
			while (j < size)
			{
				if (tab[i][j] != -1 && tab[i][j - 1] == -1)
					sort = swapl(tab, i, j);
				j++;
			}
			i++;
			j = 1;
		}
	}
	return (tab);
}

static int		**addl(int **tab, int size, int i, int j)
{
	int ret;

	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			if (tab[i][j - 1] == tab[i][j] && tab[i][j] != -1)
				ret = sum(tab, i, j);
			j++;
		}
		i++;
	}
	return (tab);
}

int				**ft_left(int **tab, int size)
{
	int i;
	int j;

	i = 0;
	j = 1;
	tab = sortl(tab, size, i, j);
	tab = addl(tab, size, i, j);
	tab = sortl(tab, size, i, j);
	return (tab);
}
