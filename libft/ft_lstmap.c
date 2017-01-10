/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 19:00:13 by tguillot          #+#    #+#             */
/*   Updated: 2015/12/01 16:42:57 by tguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*point;
	t_list	*svg;

	if (lst == NULL || f == NULL)
		return (NULL);
	svg = f(lst);
	if ((new = ft_lstnew(svg->content, svg->content_size)))
	{
		point = new;
		lst = lst->next;
	}
	while (lst)
	{
		svg = f(lst);
		if (!(point->next = ft_lstnew(svg->content, svg->content_size)))
			return (NULL);
		point = point->next;
		lst = lst->next;
	}
	return (new);
}
