/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 23:11:34 by agraille          #+#    #+#             */
/*   Updated: 2024/11/13 09:50:36 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	a;
	char			c;

	if (!fd)
		return ;
	if (n < 0)
	{
		write(fd, "-", 1);
		a = -n;
	}
	else
		a = n;
	if (a > 9)
		ft_putnbr_fd(a / 10, fd);
	c = a % 10 + '0';
	write(fd, &c, 1);
}
