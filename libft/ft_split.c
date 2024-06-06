/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:25:30 by zac               #+#    #+#             */
/*   Updated: 2024/06/05 11:33:36 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_tokens(char const *s, char delimeter)
{
	size_t	tokens;
	int		inside_token;

	tokens = 0;
	while (*s)
	{
		inside_token = 0;
		while (*s == delimeter && *s)
			++s;
		while (*s != delimeter && *s)
		{
			if (inside_token == 0)
			{
				++tokens;
				inside_token = 1;
			}
			++s;
		}
	}
	return (tokens);
}

int	safe_malloc(char **token_v, int position, size_t buffer)
{
	int	i;

	i = 0;
	token_v[position] = malloc(buffer);
	if (NULL == token_v[position])
	{
		while (i < position)
		{
			free(token_v[i++]);
		}
		free(token_v);
		return (1);
	}
	return (0);
}

int	fill(char **token_v, char const *s, char delimeter)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == delimeter && *s)
			++s;
		while (*s != delimeter && *s)
		{
			++len;
			++s;
		}
		if (len)
		{
			if (safe_malloc(token_v, i, len + 1))
				return (1);
			ft_strlcpy(token_v[i], s - len, len + 1);
			i++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	tokens;
	char	**token_v;

	if (NULL == s)
		return (NULL);
	tokens = 0;
	tokens = count_tokens(s, c);
	token_v = malloc((tokens + 1) * sizeof(char *));
	if (NULL == token_v)
		return (NULL);
	token_v[tokens] = (NULL);
	if (fill(token_v, s, c))
		return (NULL);
	return (token_v);
}
/*
#include <stdio.h>
int main()
{
	char	*src = "hello there dude, whats up?";
	char 	**v = ft_split(src, ' ');
	while (*v)
		printf("%s\n", *v++);
	return (0);
}
*/