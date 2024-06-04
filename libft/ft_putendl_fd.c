/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:47:19 by zac               #+#    #+#             */
/*   Updated: 2024/06/04 18:03:56 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if(s)
	{
		while (*s)
			write(fd, s++, 1);
		write(fd, "\n", 1);
	}
}
/*
int main()
{
	ft_putendl_fd("world0", 0);
	ft_putendl_fd("world1", 1);
	ft_putendl_fd("world2", 2);
	// not in terminal
	ft_putendl_fd("world3", 3);
	return (0);
}
*/