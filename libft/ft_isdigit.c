/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:20:58 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/21 12:28:23 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main() {
    printf("%d\n", ft_isdigit('b'));
    printf("%d\n", ft_isdigit('#'));
    printf("%d\n", ft_isdigit(50));
    printf("%d\n", ft_isdigit('5'));
    return (0);
}
*/
//norminette -R CheckForbiddenSourceHeader
//cc -Wall -Wextra -Werror
