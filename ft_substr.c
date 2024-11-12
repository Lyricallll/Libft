/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:00:37 by agraille          #+#    #+#             */
/*   Updated: 2024/11/12 14:54:58 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	size_t	i;
	size_t	str_len;

	str_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (len > str_len - start)
		len = str_len - start;
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	new_string = malloc(sizeof(char) * (len + 1));
	if (!new_string)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		new_string[i] = s[start + i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
