/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:07:57 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/10/22 22:41:29 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		len;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main()
{
	char src[] = "hello";
	printf("%s\n", ft_strdup(src));
	printf("%p\n", ft_strdup(src));
}
*/
// norminette -R CheckForbiddenSourceHeader
// cc -Wall -Wextra -Werror ft_strlen.c ft_strdup.c