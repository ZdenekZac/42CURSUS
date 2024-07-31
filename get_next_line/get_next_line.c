/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:55:09 by zac               #+#    #+#             */
/*   Updated: 2024/07/31 14:53:25 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// char	*read_file(int fd, char *buffer)
// {
// 	char	*new_read_buffer;
// 	if (!buffer)
// }

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}

char	*get_next_line(int fd)
{
	char	*buf;
	char	*rest;
	char	*temp;
	int		chars_read;
	static char	*newLine;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
	{
		return (NULL);
	}
	if (newLine == NULL)
	{
		newLine = malloc(sizeof(char) * 1);
		newLine[0] = '\0';
	}

	while((chars_read = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[chars_read] = '\0';
		//temp = ft_strjoin(newLine, buf);
		if (!temp)
		{	
			if (newLine)
				free(newLine);
			free(buf);
			return (NULL);
		}
		//printf("newLine after free(): %s\n", newLine);
		newLine = temp;	
		//printf("newLine=temp: %s\n", newLine);
		//printf("temp:%s\n", temp);
		ft_bzero(buf, BUFFER_SIZE + 1);
	}
	if (chars_read == -1)
	{
		return (NULL);
	}

	// printf("newLine:\n %s", newLine);
	// free(buf);
	// close(fd);
	return (newLine);
}