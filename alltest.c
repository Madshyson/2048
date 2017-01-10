/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alltest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 21:26:56 by mlavanan          #+#    #+#             */
/*   Updated: 2016/01/30 22:28:30 by mlavanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		alltest(int **tab, int i, int j)
{
	int ret;

	ret = 0;
	ret += testu(tab, i, j);
	ret += testd(tab, i, j);
	ret += testr(tab, i, j);
	ret += testl(tab, i, j);
	if (ret > 0)
		return (1);
	return (0);
}
