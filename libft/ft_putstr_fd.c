/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:25:20 by zac               #+#    #+#             */
/*   Updated: 2024/06/04 18:01:39 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
			write(fd, s++, 1);
	}
}
/*
int main()
{
	ft_putstr_fd("hello0", 0);
	ft_putstr_fd("\n", 0);
    ft_putstr_fd("world1", 1);
	ft_putstr_fd("\n", 0);
    ft_putstr_fd("world2", 2);
	ft_putstr_fd("\n", 0);
	// not in terminal
    ft_putstr_fd("world3", 3);
	return (0);
}
*/