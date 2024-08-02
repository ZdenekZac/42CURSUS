/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:54:43 by zac               #+#    #+#             */
/*   Updated: 2024/08/02 18:37:53 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		*p++ = 0;
		n--;
	}
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return (NULL);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';

	return (str);
}

char	*ft_substr_start(char *s, int len)
{
	char	*start;
	int		i;

	start = malloc(sizeof (char) * len);
	if (!start)
		return (NULL);

	i = 0;
	while (len > 0)
	{
		start[i] = s[i];
		i++;
		len--;
	}
	return (start);
}

char	*ft_clear_line(char *temp)
{
	char			*line;
	int				i;

	i = 0;
	while (temp[i] != '\n')
	{
		i++;
	}
	line = malloc(sizeof(char) * (i + 2));   
	if (!line)
		return (NULL);
	ft_bzero(line, i + 2);
	line = ft_substr_start(temp, i);
	line[i + 1] = '\n';
	line[i + 2] = '\0';

	return (line);
}


char	*ft_rest_start(char *buff)
{
	char	*rest_start;
	int		i;

	i = 0;
	while (buff[i] != '\n' && buff[i] != '\0') {
		i++;
	}
	if (buff[i] == '\n') {
		rest_start = &buff[i + 1];
	} else {
		rest_start = NULL;
	}
	return (rest_start);
}

char	*ft_read_file(int fd, char *buffer)
{
	int		chars_read;	
	char	*buf;

	chars_read = 1;
	if (buffer == NULL) 
		buffer = (char *)malloc(1);
	if (!buffer) 
		return NULL;
	buffer[0] = '\0';
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
    buf[0] = '\0';
	while(chars_read > 0)
	{
		ft_bzero(buf, BUFFER_SIZE);
		chars_read = read(fd, buf, BUFFER_SIZE);
		if (chars_read == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[chars_read] = '\0';
		buffer = ft_strjoin(buffer, buf);
		if(ft_strchr(buf, '\n') != NULL) 
			break ;
	}
	free(buf);
	return (buffer);
}

// dodelat zbytek od '\n' dozadu - zkopiruj ft_clear_line a modifikuj !!!