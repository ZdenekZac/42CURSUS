/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:23:03 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/22 16:53:13 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		*p++ = 0;
		n--;
	}
}
/*
#include <stdio.h>
int main() {
    char s[] = "hello";
    printf("%s\n", s);
    ft_bzero(s + 2, 2);
    printf("%s\n", s);
    ft_bzero(s, 3);
    printf("%s\n", s);
    return (0);
}
//norminette -R CheckForbiddenSourceHeader
*/