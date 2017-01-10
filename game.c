/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2048.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 20:23:50 by tguillot          #+#    #+#             */
/*   Updated: 2016/01/31 23:35:47 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static void		vertical(WINDOW *grid, int x, int y)
{
	int a;
	int b;

	a = 1;
	while (a <= 3)
	{
		b = 1;
		while (b < (x - 1))
		{
			mvwprintw(grid, 1 * b, (y / 4) * a, "|");
			b++;
		}
		a++;
	}
}

static void		horizontal(WINDOW *grid, int x, int y)
{
	int a;
	int b;

	a = 1;
	while (a <= 3)
	{
		b = 1;
		while (b < (y - 1))
		{
			mvwprintw(grid, (x / 4) * a, 1 * b, "-");
			b++;
		}
		a++;
	}
}

static void		firsttab(WINDOW *grid, int **tab, int x, int y)
{
	int		a;
	int		c;
	char	*d;

	a = 0;
	while (a < 4)
	{
		c = 0;
		while (c < 4)
		{
			if (tab[a][c] > 0)
				d = ft_itoa(tab[a][c]);
			else
				d = " ";
			mvwprintw(grid, x / 4 / 2 + a * x / 4, y / 4 / 2 + c * y / 4, d);
			c++;
		}
		a++;
	}
}

static int		print(WINDOW *grid, int **tab)
{
	int a;
	int x;
	int y;

	getmaxyx(grid, x, y);
	vertical(grid, x, y);
	horizontal(grid, x, y);
	firsttab(grid, tab, x, y);
	a = getch();
	if (a == 258 || a == 259 || a == 260 || a == 261)
		tab = gamehandler(tab, 4, a);
	if (a == 27)
		return (0);
	return (1);
}

int				main(void)
{
	WINDOW	*grid;
	int		**tab;
	int		aswin;

	if (checkenum() == 0)
		return (0);
	initscr();
	keypad(stdscr, TRUE);
	tab = ft_tabinit(4);
	aswin = 0;
	while (1)
	{
		clear();
		grid = subwin(stdscr, LINES, COLS, 0, 0);
		wborder(grid, '|', '|', '-', '-', 'o', 'o', 'o', 'o');
		if (print(grid, tab) == 0 || (aswin = win(tab, aswin)) == 0)
			break ;
		wrefresh(grid);
	}
	free(tab);
	delwin(grid);
	endwin();
	return (0);
}
