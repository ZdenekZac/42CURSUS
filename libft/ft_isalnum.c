/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:29:23 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/22 10:51:40 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main() {
    printf("%d\n", ft_isalnum('b'));
    printf("%d\n", ft_isalnum('#'));
    printf("%d\n", ft_isalnum(50));
    printf("%d\n", ft_isalnum('5'));
    return (0);
}
//norminette -R CheckForbiddenSourceHeader
*/