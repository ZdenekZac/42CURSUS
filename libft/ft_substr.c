/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:27:26 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/30 16:46:07 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "hello";
	printf("%s \n", ft_substr(str, 0, sizeof(str)));
	printf("%s \n", ft_substr(str, 1, sizeof(str)));
	printf("%s \n", ft_substr(str, 2, sizeof(str)));
	printf("%s \n", ft_substr(str, 3, sizeof(str)));
	printf("%s \n", ft_substr(str, 4, sizeof(str)));
  
	return (0);
}
// norminette -R CheckForbiddenSourceHeader
// cc -Wall -Wextra -Werror ft_substr.c ft_memcpy.c
*/
