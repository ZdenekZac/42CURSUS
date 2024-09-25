/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:25:54 by vmoroz            #+#    #+#             */
/*   Updated: 2024/08/09 21:32:08 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_bzero(void *dest, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)dest;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	int i;
// 	i = 0;
// 	char str[] = "hello";
// 	ft_bzero(str, 3);
// 	while (i < 5)
// 	{
// 		printf("%c", str[i]);
// 		i++;
// 	}
// 	return (0);
// }