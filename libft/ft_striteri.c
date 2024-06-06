/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 22:53:03 by zac               #+#    #+#             */
/*   Updated: 2024/06/05 11:41:22 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_helper(unsigned int i, char * c)
{
	if (i % 1 == 0)
		*c -= 32; 
}
#include <stdio.h>
int	main()
{
	char str[] = "hello";
	ft_striteri(str, ft_helper);
	printf("%s", str);
	return (0);
}
*/