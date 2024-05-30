/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:35:14 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/29 21:30:22 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
/*
#include <stdio.h>
int main() {
    char src[] = "Hello!";
    printf("%p\n", ft_strchr(src, 'e'));
	printf("%p\n", ft_strchr(src, '!'));
	printf("%p\n", ft_strchr(src, '\0'));
	printf("%p\n", ft_strchr(src, 'a'));

    return 0;
}
*/
//norminette -R CheckForbiddenSourceHeader
//cc -Wall -Wextra -Werror ft_strchr.c