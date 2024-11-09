/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:49:10 by agraille          #+#    #+#             */
/*   Updated: 2024/11/09 23:06:08 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
	
	if (fd == -1)
	{
		return (1);
	}
	ft_putchar_fd('A', fd);
	close(fd);
}
*/
