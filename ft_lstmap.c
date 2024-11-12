/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:10:16 by agraille          #+#    #+#             */
/*   Updated: 2024/11/12 13:26:07 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	t_list	*temp;

	new_list = NULL;
	while (lst != NULL)
	{
		temp = malloc(sizeof(t_list));
		if (!temp)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		temp->content = f(lst->content);
		if (new_list == NULL)
			new_list = temp;
		else
			new_elem->next = temp;
		new_elem = temp;
		lst = lst->next;
	}
	return (new_list);
}
