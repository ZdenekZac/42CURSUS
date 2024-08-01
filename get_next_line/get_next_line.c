/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:55:09 by zac               #+#    #+#             */
/*   Updated: 2024/08/01 18:27:50 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// char	*read_file(int fd, char *buffer)
// {
// 	char	*new_read_buffer;
// 	if (!buffer)
// }

char	*get_next_line(int fd)
{
	char		*buf;
	static char	*rest;
	char		*line;
	char		*newLine;
	int			chars_read;
	char		*temp;

	temp = malloc(sizeof(char) * 1);
	temp[0] = '\0';

	chars_read = 1;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);

	//while((chars_read = read(fd, buf, BUFFER_SIZE)) > 0)
	while(chars_read > 0)
	{
		ft_bzero(buf, BUFFER_SIZE);
		chars_read = read(fd, buf, BUFFER_SIZE);
		if (chars_read == -1)
			return (NULL);
		buf[chars_read] = '\0';
		temp = ft_strjoin(temp, buf);
		if(ft_strchr(buf, '\n') != 0) 
			break ;
	}
	newLine = temp;	
	free(buf);

	line = ft_clear_line(newLine);
	printf("linetest:%s\n", line);
	return (line);
}