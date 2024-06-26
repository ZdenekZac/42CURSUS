/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:07:48 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/29 21:47:30 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (NULL);
	if (!needle || !needle[0])
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && i + j < len
			&& haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
/*
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little == NULL || little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j])
			{
				if (little[j + 1] == '\0')
					return ((char *) big + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
*/
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