/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:38:06 by zac               #+#    #+#             */
/*   Updated: 2025/01/14 07:58:06 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isdigit(int i)
{
	if ('0' <= i && i <= '9')
		return(1);
	return (0);
}

int	only_nums_in_stack(char *nums)
{
	int	i;
	int	minus;
	
	i = 0;
	minus = 0;
	while (nums[i])
	{
		if (nums[i] == 45)
			minus++;
		else if (ft_isdigit(nums[i]) == 0)
			return (0);
		i++;
	}
	
}