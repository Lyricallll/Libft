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

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_copy;
	unsigned char	*src_copy;
	unsigned char	*temp;

	dest_copy = (unsigned char *) dest;
	src_copy = (unsigned char *) src;
	while (n > 0)
	{
		*temp = *src_copy;
		temp++;
		src_copy++;
		n--;
	}
	while () A FINIR VOIR SI CAT OU PAS 
	return (dest);
}