/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:48:53 by agraille          #+#    #+#             */
/*   Updated: 2024/11/06 15:43:08 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_calloc(size_t number_elements, size_t size_element)
{
	void	*ptr;
	size_t	total_size_allocate;
	size_t	i;

	total_size_allocate = number_elements * size_element;
	ptr = malloc(total_size_allocate);
	if (!ptr)
		return (0);
	i = 0;
	while (i < total_size_allocate)
	{
		*((char *) ptr + i) = 0;
		i++;
	}

	return (ptr);
}
