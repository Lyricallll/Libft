/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:26:43 by agraille          #+#    #+#             */
/*   Updated: 2024/11/12 14:51:08 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char	*src;

	src = (const unsigned char *) ptr;
	while (num > 0)
	{
		if (*src == (unsigned char) value)
			return ((char *) src);
		src++;
		num--;
	}
	return (0);
}
