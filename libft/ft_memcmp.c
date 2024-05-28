/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:41:33 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/28 11:59:44 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main() {
    char sr1[] = "abcd";
    char sr2[] = "abcde";	
	printf("sizeof sr1: %ld\n", sizeof(sr1));
	printf("sizeof sr2: %ld\n", sizeof(sr2));
    printf("%d\n", ft_memcmp(sr1, sr2, sizeof(sr1)));
	printf("%d\n", ft_memcmp(sr1, sr2, sizeof(sr2)));
	printf("%d\n", ft_memcmp(sr1, sr2, 4));
	printf("%d\n", ft_memcmp(sr1, sr2, 3));
	printf("%d\n", ft_memcmp(sr2, sr1, sizeof(sr1)));
	printf("%d\n", ft_memcmp(sr2, sr1, sizeof(sr2)));
	printf("%d\n", ft_memcmp(sr2, sr1, 4));
	printf("%d\n", ft_memcmp(sr2, sr1, 3));

    return 0;
}
//norminette -R CheckForbiddenSourceHeader
//cc -Wall -Wextra -Werror ft_memcmp.c
*/