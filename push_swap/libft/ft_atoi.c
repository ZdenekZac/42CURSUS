/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 20:22:00 by zac               #+#    #+#             */
/*   Updated: 2024/08/09 21:28:33 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return (num * sign);
}
// int	main(void)
// {
// 	char str[] = "  -1234567";
// 	int res = atoi(str);
// 	int res2 = ft_atoi(str);
// 	printf("atoi: %d\n", res);
// 	printf("FT_atoi: %d\n", res2);
// 	return (0);
// }
