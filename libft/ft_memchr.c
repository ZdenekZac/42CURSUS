/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:21:24 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/28 11:40:46 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main() {
    const char *src = "Hello!";
    printf("%p\n", ft_memchr(src, 'e', 5));
    printf("%p\n", ft_memchr(src, 'o', 5));
    printf("%p\n", ft_memchr(src, '!', 6));
    printf("%p\n", ft_memchr(src, 'a', 5));

    return 0;
}
*/
//norminette -R CheckForbiddenSourceHeader
//cc -Wall -Wextra -Werror