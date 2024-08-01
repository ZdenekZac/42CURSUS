/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:55:09 by zac               #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/07/30 16:19:51 by zdoskoci         ###   ########.fr       */
=======
/*   Updated: 2024/07/31 14:53:25 by zac              ###   ########.fr       */
>>>>>>> e3f828910563940a2a6bf1363181cd99504ffb09
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd) {
    static char *remainder;
    char buffer[BUFFER_SIZE + 1];
    char *newline;
    char *temp;
    ssize_t bytes_read;

<<<<<<< HEAD
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);

    while ((newline = ft_strchr(remainder, '\n')) == NULL) {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read <= 0)
            break;
        buffer[bytes_read] = '\0';
        temp = ft_strjoin(remainder, buffer);
        free(remainder);
        remainder = temp;
    }

    if (bytes_read < 0 || (bytes_read == 0 && !remainder))
        return (NULL);
=======
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
>>>>>>> e3f828910563940a2a6bf1363181cd99504ffb09

    if (newline) {
        *newline = '\0';
        temp = ft_strdup(remainder);
        remainder = ft_strdup(newline + 1);
        return (temp);
    } else {
        temp = ft_strdup(remainder);
        free(remainder);
        remainder = NULL;
        return (temp);
    }
}