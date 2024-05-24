/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:28:20 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/24 16:48:29 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dslen;
	size_t	srlen;

	srlen = ft_strlen(src);
	dslen = ft_strlen(dst);
	j = dslen;
	i = 0;
	if ((dslen < size - 1) && (size > 0))
	{
		while (src[i] && dslen + i < size - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = 0;
	}
	if (dslen >= size)
		dslen = size;
	return (dslen + srlen);
}
/*
#include <stdio.h>
int main() {
    char d[10] = "1234";
    char s[] = "abc";
    printf("%ld\n",ft_strlcat(d,s,8));
    printf("source: %s\n",s);
    printf("destination: %s\n",d);

    return (0);
}
//norminette -R CheckForbiddenSourceHeader
//cc -Wall -Wextra -Werror
*/
