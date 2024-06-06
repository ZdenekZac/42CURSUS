/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:24:27 by zac               #+#    #+#             */
/*   Updated: 2024/06/05 11:30:20 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	ft_len(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	number;
	unsigned int	length;

	length = ft_len(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		str[0] = '0';
	str[length] = '\0';
	while (number != 0)
	{
		str[length - 1] = (number % 10) + '0';
		number /= 10;
		length--;
	}
	return (str);
}
/*
#include <stdint.h>
#include <stdio.h>
int main()
{
  char *str = ft_itoa(-2134);
  printf("%s\n", str);

  str = ft_itoa(42);
  printf("%s\n", str);
  str = ft_itoa(707);
  printf("%s\n", str);
  str = ft_itoa(0);
  printf("%s\n", str);
    str = ft_itoa(INT32_MIN);
  printf("%s\n", str);
  str = ft_itoa(INT32_MAX);
  printf("%s\n", str);
  
  return 0;
}
*/