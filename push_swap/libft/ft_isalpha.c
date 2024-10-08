/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 05:54:36 by zac               #+#    #+#             */
/*   Updated: 2024/09/25 23:08:19 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	return (0);
}
// int	main(void)
// {
// 	int input1 = 'Z';
// 	if (ft_isalpha(input1))
// 	{
// 		printf("\"%d\" TRUE\n", input1);
// 	}
// 	else
// 	{
// 		printf("\"%d\" FALSE\n", input1);
// 	}
// 	return (0);
// }