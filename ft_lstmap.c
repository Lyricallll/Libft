/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:10:16 by agraille          #+#    #+#             */
/*   Updated: 2024/11/15 08:31:17 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*temp_content;

	if (!lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		temp_content = f(lst->content);
		new_node = ft_lstnew(temp_content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			if (temp_content)
				del(temp_content);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
