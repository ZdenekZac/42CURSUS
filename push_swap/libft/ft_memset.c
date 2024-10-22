/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:40:34 by zac               #+#    #+#             */
/*   Updated: 2024/10/22 20:54:27 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, size_t count)
{
	char	*p;

	p = (char *)dest;
	while (count > 0)
	{
		p[count - 1] = value;
		count--;
	}
	return (dest);
}
// #include <stdio.h>
// int main() {
// 	char s[] = "hello";
// 	printf("%s\n", s);
// 	ft_memset(s, 'B', 3);
// 	printf("%s\n", s);
// 	printf("%s\n", (char *)ft_memset(s, 'X', 5));
//     return (0);
// }