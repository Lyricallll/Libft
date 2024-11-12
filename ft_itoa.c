/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:31:06 by agraille          #+#    #+#             */
/*   Updated: 2024/11/12 14:49:57 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*tab;
	int				len;
	unsigned int	temp_n;

	len = ft_len(n);
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	tab[len] = '\0';
	if (n < 0)
		temp_n = -n;
	else
		temp_n = n;
	while (len-- > 0)
	{
		tab[len] = temp_n % 10 + '0';
		temp_n /= 10;
	}
	if (n < 0)
		tab[0] = '-';
	return (tab);
}
