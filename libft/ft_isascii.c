/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:36:23 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/21 12:42:51 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
 #include <stdio.h>
int main() {
    printf("%d\n", ft_isascii('b'));
    printf("%d\n", ft_isascii('#'));
    printf("%d\n", ft_isascii(50));
    printf("%d\n", ft_isascii('5'));
	printf("%d\n", ft_isascii('\n'));
	printf("%d\n", ft_isascii(128));
    return (0);
}
*/