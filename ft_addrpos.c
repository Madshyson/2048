/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addrpos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 11:29:49 by mlavanan          #+#    #+#             */
/*   Updated: 2016/01/31 18:21:20 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static int		**putvalue(int **tab, int size, int value, int nbempty)
{
	int i;
	int j;
	int setpos;
	int pos;

	i = 0;
	pos = 0;
	setpos = ft_random(nbempty);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i][j] == -1)
			{
				if (pos == setpos)
					tab[i][j] = value;
				pos++;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

static int		getnbempt(int **tab, int size)
{
	int i;
	int j;
	int ret;

	i = 0;
	ret = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i][j] == -1)
				ret++;
			j++;
		}
		i++;
	}
	return (ret);
}

static int		getnumvalue(void)
{
	int r;

	r = ft_random(4);
	if (r == 3)
		return (4);
	else
		return (2);
}

int				**ft_addrpos(int **tab, int size)
{
	int value;
	int nbempty;

	value = getnumvalue();
	nbempty = getnbempt(tab, size);
	if (nbempty == 0)
		return (tab);
	tab = putvalue(tab, size, value, nbempty);
	return (tab);
}
