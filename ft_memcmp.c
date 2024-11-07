/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:13:49 by agraille          #+#    #+#             */
/*   Updated: 2024/11/07 08:09:35 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = (const unsigned char *) ptr1;
	s2 = (const unsigned char *) ptr2;
	while ((*s1 || *s2) && (num > 0))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		num--;
	}
	return (0);
}
/*
int	main(void)
{
	const	unsigned char	ptr1[50] = "hello le monde"; 
	const	unsigned char	ptr2[50] = "hellb le monde";

	printf("%d\n",memcmp(ptr1,ptr2,15));
	printf("%d\n",ft_memcmp(ptr1,ptr2,15));

}
*/
