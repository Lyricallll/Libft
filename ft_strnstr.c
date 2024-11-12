/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:50:25 by agraille          #+#    #+#             */
/*   Updated: 2024/11/12 14:54:08 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size_of_str2;

	i = 0;
	size_of_str2 = 0;
	if (str2[0] == '\0')
		return ((char *)str1);
	while (str2[size_of_str2])
		size_of_str2++;
	while (i < len && str1[i])
	{
		if (str1[i] == str2[0])
		{
			j = 0;
			while ((i + j) < len && str1[i + j] == str2[j] && str1[i + j])
			{
				if (j == size_of_str2 - 1)
					return ((char *) &str1[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
