/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 23:20:14 by mlavanan          #+#    #+#             */
/*   Updated: 2016/01/31 14:56:32 by mlavanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		**ft_move(int **tab, int size, int key)
{
	if (key == 260)
		ft_left(tab, size);
	else if (key == 259)
		ft_up(tab, size);
	else if (key == 261)
		ft_right(tab, size);
	else if (key == 258)
		ft_down(tab, size);
	else
		return (tab);
	return (tab);
}
