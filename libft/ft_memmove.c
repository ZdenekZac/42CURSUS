/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:26:45 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/27 12:26:09 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;

	len = 0;
	if (src < dest)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
			len++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int main() {
    char dst[20];
    char src[] = "Hello, World!";
	printf(" %p\n", (char *)ft_memmove(dst, src, sizeof(src)));
    printf("dst: %s\n", dst);

    return 0;
}
//norminette -R CheckForbiddenSourceHeader
//cc -Wall -Wextra -Werror
*/