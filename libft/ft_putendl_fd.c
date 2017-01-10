/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:14:08 by tguillot          #+#    #+#             */
/*   Updated: 2015/11/29 09:34:33 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		write(fd, &s[a], 1);
		a++;
	}
	write(fd, "\n", 1);
}
