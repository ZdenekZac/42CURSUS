/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:46:16 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/24 12:27:14 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
int main() {
    char d[10];
    char s[] = "hello";
    printf("%ld\n",ft_strlcpy(d,s,2));
    printf("source: %s\n",s);
    printf("destination: %s\n",d);

    return (0);
}
//norminette -R CheckForbiddenSourceHeader
//cc -Wall -Wextra -Werror
*/