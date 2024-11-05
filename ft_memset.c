/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:48:48 by agraille          #+#    #+#             */
/*   Updated: 2024/11/05 14:20:15 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*ptr = (unsigned char) c;
		n--;
		ptr++;
	}
	return (s);
}

/*
int	main(void)
{
	char	s[100] = "allo la terre";
	int	c = 50;

	ft_memset(s,c,5);
	printf("%s", s);
	return (0);
}
*/