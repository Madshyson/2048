/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:04:03 by tguillot          #+#    #+#             */
/*   Updated: 2016/01/27 14:15:12 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word(char const *s, char b)
{
	int		a;
	int		mots;

	a = 0;
	mots = 0;
	while (s[a] != '\0')
	{
		if (s[a] == b)
			a++;
		else
		{
			while (s[a] != b && s[a] != '\0')
				a++;
			mots++;
		}
	}
	return (mots);
}

char		**ft_strsplit(char const *s, char c)
{
	int		a;
	int		d;
	int		e;
	char	**tab;

	a = 0;
	d = 0;
	e = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_word(s, c) + 1))))
		return (NULL);
	tab[ft_word(s, c)] = NULL;
	while (a < ft_word(s, c))
	{
		while (s[e] == c)
			e++;
		while (s[e] != c)
		{
			e++;
			d++;
		}
		tab[a] = ft_strsub(s, (e - d), d);
		d = 0;
		a++;
	}
	return (tab);
}
