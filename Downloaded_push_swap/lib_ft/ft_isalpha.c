/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:47:32 by vmoroz            #+#    #+#             */
/*   Updated: 2024/08/11 05:51:06 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	return (0);
}
// int	main(void)
// {
// 	int input1 = 123;


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