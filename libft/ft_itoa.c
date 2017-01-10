/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:06:34 by tguillot          #+#    #+#             */
/*   Updated: 2016/01/26 18:16:02 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_absolut(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}

static char	*ft_write(char *str, int c, int e)
{
	while (e != 0)
	{
		str[c--] = '0' + ft_absolut(e % 10);
		e = e / 10;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int		a;
	int		c;
	int		e;
	char	*str;

	a = 0;
	e = n;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		a++;
	while (n != 0)
	{
		n = n / 10;
		a++;
	}
	if (!(str = ft_strnew(a)))
		return (NULL);
	str[a] = '\0';
	if (e < 0)
		str[0] = '-';
	c = a - 1;
	return (ft_write(str, c, e));
}
