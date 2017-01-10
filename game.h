/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 21:20:51 by tguillot          #+#    #+#             */
/*   Updated: 2016/01/31 23:09:35 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include <time.h>
# include <ncurses.h>
# include "./libft/libft.h"

int		**ft_addrpos(int **tab, int size);
int		ft_checkwin(int **tab, int size);
int		**ft_tabinit(int size);
int		**gamehandler(int **tab, int size, int key);
int		**ft_right(int **tab, int size);
int		ft_random(int mod);
int		**ft_move(int **tab, int size, int key);
int		**ft_left(int **tab, int size);
int		ft_hasmoved(int **tab, int **prev, int size);
int		**ft_down(int **tab, int size);
int		ft_checkloose(int **tab, int size);
int		**ft_up(int **tab, int size);
int		ft_test(int **tab, int size, int i, int j);
int		testu(int **tab, int i, int j);
int		testl(int **tab, int i, int j);
int		testd(int **tab, int i, int j);
int		testr(int **tab, int i, int j);
int		alltest(int **tab, int i, int j);
void	ft_printgame(WINDOW *win, int **tab, int size);
int		win(int **tab, int aswin);
int		checkenum(void);

enum	e_const
{
	WIN_VALUE = 2048
};

#endif
