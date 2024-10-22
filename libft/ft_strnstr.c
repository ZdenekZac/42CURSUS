/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:07:48 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/10/22 22:49:30 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack && !needle)
		return (NULL);
	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && (i + j) < len
			&& haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main() {
    char hay[] = "xxxabcdefxx";
    char nee[] = "abc";   
	char ne2[] = "ab";    
    printf("%p\n", ft_strnstr(hay, nee, sizeof(hay)));
	printf("%p\n", ft_strnstr(hay, ne2, sizeof(hay)));

    return 0;
}
// norminette -R CheckForbiddenSourceHeader
// cc -Wall -Wextra -Werror ft_strnstr.c
*/