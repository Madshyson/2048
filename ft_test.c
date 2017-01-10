/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 19:16:58 by mlavanan          #+#    #+#             */
/*   Updated: 2016/01/31 12:38:30 by mlavanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		testborderl(int **tab, int i, int j, int size)
{
	int ret;

	ret = 0;
	if (i != 0)
		ret += testu(tab, i, j);
	if (i != size - 1)
		ret += testd(tab, i, j);
	ret += testr(tab, i, j);
	if (ret > 0)
		return (1);
	return (0);
}

int		testborderu(int **tab, int i, int j, int size)
{
	int ret;

	ret = 0;
	if (j != 0)
		ret += testl(tab, i, j);
	if (j != size - 1)
		ret += testr(tab, i, j);
	ret += testd(tab, i, j);
	if (ret > 0)
		return (1);
	return (0);
}

int		testborderr(int **tab, int i, int j, int size)
{
	int ret;

	ret = 0;
	if (i != 0)
		ret += testu(tab, i, j);
	if (i != size - 1)
		ret += testd(tab, i, j);
	ret += testl(tab, i, j);
	if (ret > 0)
		return (1);
	return (0);
}

int		testborderd(int **tab, int i, int j, int size)
{
	int ret;

	ret = 0;
	if (j != 0)
		ret += testl(tab, i, j);
	if (j != size - 1)
		ret += testr(tab, i, j);
	ret += testu(tab, i, j);
	if (ret > 0)
		return (1);
	return (0);
}

int		ft_test(int **tab, int size, int i, int j)
{
	int ret;

	ret = 0;
	if (i == 0)
		ret += testborderu(tab, i, j, size);
	else if (j == 0)
		ret += testborderl(tab, i, j, size);
	else if (i == size - 1)
		ret += testborderd(tab, i, j, size);
	else if (j == size - 1)
		ret += testborderr(tab, i, j, size);
	else
		ret += alltest(tab, i, j);
	if (ret > 0)
		return (1);
	return (0);
}
