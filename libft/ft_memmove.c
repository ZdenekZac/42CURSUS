/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:26:45 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/10/22 21:34:31 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;

	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
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