/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:47:03 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/06/05 11:29:28 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * neg);
}
/*
#include <stdio.h>
int main() {
    char str1[] = "   -1234";
    char str2[] = " +234";
    printf("%d\n", ft_atoi(str1)); 
    printf("%d\n", ft_atoi(str2)); 
 
    return 0;
}
// norminette -R CheckForbiddenSourceHeader
// cc -Wall -Wextra -Werror ft_atoi.c
*/