/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:35:37 by agraille          #+#    #+#             */
/*   Updated: 2024/11/06 07:22:50 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*dest_copy;
	const unsigned char		*src_copy;
	size_t					i;

	dest_copy = (unsigned char *)dest;
	src_copy = (const unsigned char *)src;
	if (dest_copy > src_copy && dest_copy < src_copy + n)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest_copy[i] = src_copy[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest_copy[i] = src_copy[i];
			i++;
		}
	}
	return (dest);
}
