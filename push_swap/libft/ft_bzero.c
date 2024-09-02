/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 21:31:33 by zac               #+#    #+#             */
/*   Updated: 2024/08/09 21:44:26 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	int		i;
	char	*str;

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
// 	ft_bzero(str, 4);
// 	while (i < 5)
// 	{
// 		printf("%c", str[i]);
// 		i++;
// 	}
// 	return (0);
// }