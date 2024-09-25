/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vemichal <vemichal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:53:17 by vemichal          #+#    #+#             */
/*   Updated: 2024/06/17 18:42:33 by vemichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = 0;
}

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*str;
	size_t	x;

	x = nitems * size;
	if (nitems == 0 || size == 0)
	{
		str = malloc(0);
		return (str);
	}
	if (x / nitems != size)
		return (0);
	str = malloc(x);
	if (!str)
		return (NULL);
	ft_bzero(str, size * nitems);
	return (str);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	size_t	str1;
	size_t	str2;
	int		i;
	int		j;

	i = -1;
	j = -1;
	str1 = ft_strlen((char *)s1);
	str2 = ft_strlen((char *)s2);
	new = malloc(sizeof(char) * (str1 + str2 + 1));
	if (!new)
		return (NULL);
	while (s1[++i] != '\0')
		new[i] = s1[i];
	while (s2[++j] != '\0')
	{
		new[i] = s2[j];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (&((char *)str)[ft_strlen(((char *)str))]);
	while (str[i] != '\0' && str[i] != c)
		i++;
	if (str[i] == c)
		return (&((char *)str)[i]);
	return (0);
}
