/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 07:52:28 by agraille          #+#    #+#             */
/*   Updated: 2024/11/08 10:35:32 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char *str, char *charset, int i)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (str[i] == charset[j])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

static int	ft_check_reverse(char *str, char *charset, int end)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (str[end] == charset[j])
		{
			end--;
			j = -1;
		}
		j++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	start;
	size_t	end;
	size_t	i;

	end = ft_strlen(s1);
	i = 0;
	start = ft_check((char *)s1, (char *) set, 0);
	if (end == start)
		return (ft_strdup(""));
	end = ft_check_reverse((char *)s1, (char *) set, end - 1);
	copy = malloc(sizeof(char) * (end - start + 2));
	if (!copy)
		return (NULL);
	while (start <= end)
	{
		copy[i] = s1[start];
		start++;
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
