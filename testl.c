/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 20:57:16 by mlavanan          #+#    #+#             */
/*   Updated: 2016/01/30 22:34:48 by mlavanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		testl(int **tab, int i, int j)
{
	if (tab[i][j - 1] == -1)
		return (1);
	else if (tab[i][j - 1] == tab[i][j])
		return (1);
	return (0);
}
