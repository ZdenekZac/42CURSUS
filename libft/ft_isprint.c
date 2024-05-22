/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:44:34 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/22 10:51:18 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
 #include <stdio.h>
int main() {
    printf("%d\n", ft_isprint('b'));
    printf("%d\n", ft_isprint('#'));
    printf("%d\n", ft_isprint(50));
    printf("%d\n", ft_isprint('5'));
	printf("%d\n", ft_isprint(10));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint(31));
    return (0);
}
//norminette -R CheckForbiddenSourceHeader
*/