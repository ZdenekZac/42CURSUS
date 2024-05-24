/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:50:00 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/24 16:56:04 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
/*
#include <stdio.h>
int main() {
	int n = 'r';
    printf("%c\n",ft_toupper(n));
	printf("%c\n",ft_toupper('e'));

    return (0);
}
//norminette -R CheckForbiddenSourceHeader
//cc -Wall -Wextra -Werror
*/