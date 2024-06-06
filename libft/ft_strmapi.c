/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:02:58 by zac               #+#    #+#             */
/*   Updated: 2024/06/03 17:03:04 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	if (f == NULL)
	{
		ft_strlcpy(str, s, ft_strlen(s) + 1);
		return (str);
	}
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char my_func(unsigned int i, char c) {
    // example function that capitalizes every even indexed character
    if (i % 1 == 0) {
        return c - 32;
    }
    return c;
}
#include <stdio.h>
int main()
{
	char 	*s;
	char	(*f)(unsigned int, char);	

	f = my_func;
	s = "abcdef";	
	printf("%s\n", ft_strmapi(s, f));
	return (0);
}
*/