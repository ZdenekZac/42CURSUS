/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:58:18 by zac               #+#    #+#             */
/*   Updated: 2024/10/05 18:48:21 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int chr, size_t n)
{
	size_t	i;
	char	*to_find;

	i = 0;
	to_find = (char *)src;
	while (i < n)
	{
		if (to_find[i] == (char)chr)
			return (to_find + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str[] = "geeesgooo";
// 	char *ptr = ft_memchr(str, 's', 6);
// 	if (ptr != NULL)
// 	{
// 		printf("'s' found at index %ld.\n", ptr - str);
// 		printf("char found: %s\n", ptr);
// 	}
// 	else
// 	{
// 		printf("char not found\n");
// 	}
// 	return (0);
// }