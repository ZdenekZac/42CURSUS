/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:47:26 by vmoroz            #+#    #+#             */
/*   Updated: 2024/08/11 05:53:49 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
		return (c);
	return (0);
}
// int	main(void)
// {
// 	int input1 = 47;

// 	if (ft_isalnum(input1))
// 	{
// 		printf("\"%d\" TRUE\n", input1);
// 	}
// 	else
// 	{
// 		printf("\"%d\" FALSE\n", input1);
// 	}
// 	return (0);
// }