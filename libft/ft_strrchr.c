/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:43:39 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/27 15:19:29 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main() {
    char src[] = "Hefllo!";
    printf("%p\n", ft_strrchr(src, 'e'));
    printf("%p\n", ft_strrchr(src, 'f'));
	printf("%p\n", ft_strrchr(src, '!'));
	printf("%p\n", ft_strrchr(src, '\0'));
	printf("%p\n", ft_strrchr(src, 'a'));

    return 0;
}
//norminette -R CheckForbiddenSourceHeader
//cc -Wall -Wextra -Werror
*/
