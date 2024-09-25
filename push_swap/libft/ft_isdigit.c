/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:10:31 by zac               #+#    #+#             */
/*   Updated: 2024/09/25 23:16:45 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}

// int	main(void)
// {
// 	int input1 = '4';
// 	if (ft_isdigit(input1))
// 		printf("\"%d\" TRUE\n", input1);
// 	else
// 		printf("\"%d\" FALSE\n", input1);
// 	return (0);
// }