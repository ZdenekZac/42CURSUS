/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:55:09 by zac               #+#    #+#             */
/*   Updated: 2024/08/06 13:17:57 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *ft_substr_start(char *s, int len)
{
    char    *start;
	int     i;

    start = malloc(sizeof(char) * (len + 2));
	if (!start)
        return (NULL);
    i = 0;
    while (i <= len)
    {
        start[i] = s[i];
        i++;
    }
	start[i] = '\0';
    return (start);
}

char	*ft_clear_line(char *temp)
{
	char			*line;
	int				i;

	i = 0;
	while (temp[i] != '\n' && temp[i] != '\0')
		i++;
	line = ft_substr_start(temp, i);

//


//



	return (line);
}

char	*ft_rest_start(char *buff)
{
	char	*rest_start;
	int		i;

	i = 0;
	while (buff[i] != '\n' && buff[i] != '\0') 
		i++;
	if (buff[i] == '\n') 
	{
		i++;
		if (buff[i] == '\0')
		{
			free (buff);
			return (NULL);
		}
		rest_start = ft_strdup(&buff[i]);
	} else 
		rest_start = (NULL);
	free(buff);
	return (rest_start);
}

char	*ft_read_file(int fd, char *buffer)
{
	int		chars_read;	
	char	*buf;
	char	*temp;

	chars_read = 1;
	if (buffer == NULL) 
	{
		buffer = (char *)malloc(sizeof(char)*1);
		buffer[0] = '\0';
	}
	if (!buffer)
		return NULL;
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	while(chars_read > 0)
	{
		ft_bzero(buf, BUFFER_SIZE + 1);
		chars_read = read(fd, buf, BUFFER_SIZE);
		if (chars_read == -1)
		{
			free(buffer);
			free(buf);
			return (NULL);
		}
		temp = buffer;
		buffer = ft_strjoin(buffer, buf);
		free (temp);		
		if(ft_strchr(buf, '\n') != NULL) 
			break ;
	}
	free(buf);
	return (buffer);
}

char	*get_next_line(int fd)
{
	char			*line;
	static 	char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_read_file(fd, buffer);
	if (!buffer)
		return (NULL);

	line = ft_clear_line(buffer);
	buffer = ft_rest_start(buffer);
	return (line);
}
