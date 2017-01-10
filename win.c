/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 19:06:29 by tguillot          #+#    #+#             */
/*   Updated: 2016/01/31 22:36:20 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static int	loose(int **tab, int a)
{
	int b;

	if (ft_checkloose(tab, a) == 1)
	{
		erase();
		mvprintw(LINES / 2, COLS / 2, "You loose!!");
		mvprintw(LINES / 2 + 1, COLS / 2, "0 - Quit");
		refresh();
		while (1)
		{
			b = getch();
			if (b == 48)
				return (0);
		}
	}
	return (1);
}

int			win(int **tab, int aswin)
{
	int b;

	if (aswin != 1)
	{
		if (ft_checkwin(tab, 4) == 1)
		{
			erase();
			mvprintw(LINES / 2, COLS / 2, "You won!! 1 - Continue 0 - Quit");
			refresh();
			while (1)
			{
				b = getch();
				if (b == 48)
					return (0);
				if (b == 49)
					return (1);
			}
		}
	}
	if (loose(tab, 4) == 0)
		return (0);
	if (aswin == 1)
		return (1);
	else
		return (2);
}
