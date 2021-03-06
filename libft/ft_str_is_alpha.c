/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 22:20:31 by tguillot          #+#    #+#             */
/*   Updated: 2015/12/01 22:40:11 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_alpha(char *str)
{
	int a;

	a = 0;
	if (str[a] == '\0')
		return (1);
	while (str[a] != '\0')
	{
		if (!((str[a] >= 'A' && str[a] <= 'Z')
				|| (str[a] >= 'a' && str[a] <= 'z')))
			return (0);
		a++;
	}
	return (1);
}
