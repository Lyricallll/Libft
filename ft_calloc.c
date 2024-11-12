/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:48:53 by agraille          #+#    #+#             */
/*   Updated: 2024/11/12 14:39:36 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size_allocate;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		if (!ptr)
			return (0);
		return (ptr);
	}
	if ((size > ((size_t)-1) / nmemb))
		return (NULL);
	total_size_allocate = nmemb * size;
	ptr = malloc(total_size_allocate);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size_allocate);
	return (ptr);
}
