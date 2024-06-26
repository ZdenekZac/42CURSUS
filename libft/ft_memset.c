/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:30:27 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/22 16:52:57 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		p[n - 1] = c;
		n--;
	}
	return (s);
}
/*
#include <stdio.h>
int main() {
	char s[] = "hello";
	printf("%s\n", s);
	ft_memset(s, 'B', 3);
	printf("%s\n", s);
	printf("%s\n", (char *)ft_memset(s, 'X', 5));

    return (0);
}
//norminette -R CheckForbiddenSourceHeader
*/