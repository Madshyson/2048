/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gamehandler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 22:55:33 by mlavanan          #+#    #+#             */
/*   Updated: 2016/01/31 22:29:34 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static int		**cpy(int **src, int **dst, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			dst[i][j] = src[i][j];
			j++;
		}
		i++;
	}
	return (dst);
}

static int		**ft_tabintcpy(int **tab, int size)
{
	int **dst;
	int i;

	i = 0;
	dst = (int **)malloc(sizeof(int *) * size);
	while (i < size)
	{
		dst[i] = (int *)malloc(sizeof(int) * size);
		i++;
	}
	dst = cpy(tab, dst, size);
	return (dst);
}

int				**gamehandler(int **tab, int size, int key)
{
	int **tmp;

	tmp = ft_tabintcpy(tab, size);
	tab = ft_move(tab, size, key);
	if ((key == 261 || key == 258 || key == 260 ||
			key == 259) && ft_hasmoved(tab, tmp, size))
		tab = ft_addrpos(tab, size);
	free(tmp);
	return (tab);
}
