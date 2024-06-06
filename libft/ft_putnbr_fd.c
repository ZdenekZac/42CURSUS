/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:05:09 by zac               #+#    #+#             */
/*   Updated: 2024/06/05 12:19:56 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	if (n < 0 && n > -2147483648)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	if (n == 0)
		write(fd, "0", 1);
	else if (n > 0 && n < 10)
		ft_putchar_fd((n + 48), fd);
	else if (n != -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + 48, fd);
	}
}
/*
int    main()
{
    ft_putnbr_fd(-4, 1);    
    write(1, "\n", 1);
    ft_putnbr_fd(404, 1);    
    write(1, "\n", 1);
    ft_putnbr_fd(-2147483648, 1);    
    write(1, "\n", 1);
    ft_putnbr_fd(2147483647, 1);    
    write(1, "\n", 1);
    ft_putnbr_fd(0, 1);    
}
*/