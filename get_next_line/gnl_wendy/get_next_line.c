/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:42:46 by vemichal          #+#    #+#             */
/*   Updated: 2024/08/02 19:14:29 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char *buffer, char *new_read_buffer)
{
	char	*tmp;

	tmp = ft_strjoin(buffer, new_read_buffer);
	free(buffer);
	return (tmp);
}

// static char	*buffer;
char	*read_file(int fd, char *buffer) 
{
	char	*new_read_buffer;
	int		bytes_read;

	if (!buffer)
		buffer = ft_calloc(1, 1);
	new_read_buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, new_read_buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(new_read_buffer);
			return (NULL);
		}
		new_read_buffer[bytes_read] = 0;
		buffer = ft_free(buffer, new_read_buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(new_read_buffer);
	return (buffer);
}

char	*ft_get_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i])
	{
		line[i] = buffer[i];
		if (buffer[i] == '\n')
			break ;
		i++;
	}
	return (line);
}

char	*ft_get_rest(char *buffer)
{
	char	*new_buffer;
	int		i;
	int		j;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	new_buffer = ft_calloc(ft_strlen(buffer) - i + 1, sizeof(char));
	j = 0;
	while (buffer[++i])
		new_buffer[j++] = buffer[i];
	free(buffer);
	return (new_buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_get_line(buffer);
	buffer = ft_get_rest(buffer);
	return (line);
}

int main()
{
	// int fd = 0;
	// int i = 1;
	// while (i > 0)
	// 	printf("%s",get_next_line(fd));  

	//---------------------------------------------------------
	
	int fd = open("test2.txt", O_RDONLY);
	char *line;
	int i = 12;
    while (i > 0)
	{
	line = get_next_line(fd);
    printf("%s", line);
	free(line);  // Don't forget to free the line to avoid memory leaks
	i--;
	}
    
	return (0);
}