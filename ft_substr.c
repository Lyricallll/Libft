/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:00:37 by agraille          #+#    #+#             */
/*   Updated: 2024/11/07 08:12:08 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	size_t	i;

	new_string = malloc(sizeof(char *) * len + 1);
	if (!new_string)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		new_string[i] = s[start - 1];
		i++;
		start++;
	}
	new_string[i] = '\0';
	return (new_string);
}
/*
int	main(void)
{
	const char	tab[50] = "123456789";
	char *tab2 = ft_substr(tab,5,4);

	printf("%s\n",tab2);
}
*/
