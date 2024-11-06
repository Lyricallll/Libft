/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:50:25 by agraille          #+#    #+#             */
/*   Updated: 2024/11/06 13:20:36 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

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
int	main(void)
{
	const char	tab1[50] = "Hello le monde ou hello pas";
	const char	tab2[50] = "Hello le monde ou hello pas";

	printf("%s\n", ft_strnstr(tab1,tab2,1000));
	printf("%s\n", strnstr(tab1,tab2,1000));
}
