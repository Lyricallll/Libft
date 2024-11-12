/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 08:03:44 by agraille          #+#    #+#             */
/*   Updated: 2024/11/12 08:48:15 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int	main(void)
// {
// 	t_list	*pile;
// 	int	value = 42;

// 	pile = ft_lstnew(&value);
// 	printf("%d\n",*(int *)pile->content);
// 	// pile = pile -> next; 
// 	// printf("%d\n",*(int *)pile->content);
// 	free(pile);

//** for use head list and switch head */
