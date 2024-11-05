/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:35:37 by agraille          #+#    #+#             */
/*   Updated: 2024/11/05 15:55:01 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n) 
{
	unsigned char *dest_copy = (unsigned char *)dest;
	const unsigned char *src_copy = (const unsigned char *)src;

    if (dest_copy > src_copy && dest_copy < src_copy + n)
    	{
        	size_t i = n;
		while (i > 0) 
		{
			i--;
		dest_copy[i] = src_copy[i];
		}
	}
    else
    {
        size_t i = 0;
        while (i < n) 
	{
            dest_copy[i] = src_copy[i];
            i++;
        }
    }
    return dest;
}
