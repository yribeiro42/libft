/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 14:05:31 by yribeiro          #+#    #+#             */
/*   Updated: 2016/11/23 19:27:58 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_lst_len(t_list *lst)
{
	t_list	*tmp;
	size_t	len;

	tmp = lst;
	len = 0;
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp_new_map;
	t_list	*new_map;

	new_map = NULL;
	tmp_new_map = NULL;
	if ((new_map = (t_list *)malloc(get_lst_len(lst) * sizeof(t_list))))
	{
		new_map = f(ft_lstnew(lst->content, lst->content_size));
		tmp_new_map = new_map;
		lst = lst->next;
		while (lst)
		{
			tmp_new_map->next = f(ft_lstnew(lst->content, lst->content_size));
			tmp_new_map = tmp_new_map->next;
			lst = lst->next;
		}
	}
	return (new_map);
}
