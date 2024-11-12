/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:08:21 by agraille          #+#    #+#             */
/*   Updated: 2024/11/12 08:01:51 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
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
// }
