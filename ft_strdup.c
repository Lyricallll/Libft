/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:31:58 by agraille          #+#    #+#             */
/*   Updated: 2024/11/06 13:32:51 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	count;

	count = 0;
	while (src[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*tab;

	i = 0;
	tab = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (tab == NULL)
		return (0);
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
int main()
{
	char	*tab = "4dsad";
	char *tab2;
	tab2 = ft_strdup(tab);

}
*/
