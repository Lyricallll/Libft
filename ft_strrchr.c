/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:12:49 by agraille          #+#    #+#             */
/*   Updated: 2024/11/06 08:16:42 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (str[i] >= str[0])
	{
		if (str[i] == (unsigned char) ch)
			return ((char *) str);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	s[100] = "allo l terre";
	int	c = 97;

	printf("%s\n",ft_strrchr(s,c));
}
*/
