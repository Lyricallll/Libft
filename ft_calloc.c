/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:48:53 by agraille          #+#    #+#             */
/*   Updated: 2024/11/06 16:30:22 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number_elements, size_t size_element)
{
	void	*ptr;
	size_t	total_size_allocate;

	total_size_allocate = number_elements * size_element;
	ptr = malloc(total_size_allocate);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size_allocate);
	return (ptr);
}