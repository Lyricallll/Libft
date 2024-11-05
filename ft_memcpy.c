/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:07:55 by agraille          #+#    #+#             */
/*   Updated: 2024/11/05 15:35:07 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_copy;
	unsigned char	*src_copy;
	int				i;

	i = 0;
	dest_copy = (unsigned char *) dest;
	while (dest_copy[i])
		i++;
	src_copy = (unsigned char *) src;
	while (n > 0)
	{
		dest_copy[i] = *src_copy;
		src_copy++;
		i++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	const char tab [100] = "oui et toi";
	char tab2[100] = "Salut ca va";

	ft_memcpy(tab2,tab,4);
	printf("%s\n",tab2);
	return (0);
}
*/