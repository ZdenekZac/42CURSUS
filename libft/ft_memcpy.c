/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:43:39 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/10/22 21:58:05 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	if (!dest && !src && n > 0)
		return (NULL);
	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int main() {
    char s[] = "hello";
	char d[6];
    printf("source: %s\n", s);
    printf("dest before: %s\n", d);
    ft_memcpy(d,s,sizeof(s));
    printf("dest after: %s\n", d);

    return (0);
}
//norminette -R CheckForbiddenSourceHeader
//cc -Wall -Wextra -Werror
*/