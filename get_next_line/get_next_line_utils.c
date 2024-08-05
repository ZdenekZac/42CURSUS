/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:54:43 by zac               #+#    #+#             */
/*   Updated: 2024/08/05 16:36:38 by zdoskoci         ###   ########.fr       */
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

		printf("STR.JOIN: %s\n", str);
	return (str);
}

char    *ft_substr_start(char *s, int len)
{
    char    *start;
    int     i;

    start = malloc(sizeof(char) * (len + 1));
    if (!start)
        return (NULL);

    i = 0;
    while (i < len)
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
	{
		i++;
	}

	line = ft_substr_start(temp, i);
	line[i + 1] = '\n';
	line[i + 2] = '\0';

	printf("CLEAR_LINE: %s\n", line);
	return (line);
}

char	*ft_rest_start(char *buff)
{
	char	*rest_start;
	int		i;

	i = 0;
	while (buff[i] != '\n' && buff[i] != '\0') 
	{
		i++;
	}
	if (buff[i] == '\n') 
	{
		rest_start = &buff[i + 1];
		i++;
		if (buff[i] == '\0')
		{
			free (buff);
			return (NULL);
		}
	} else 
	{
		rest_start = NULL;
	}
	printf("REST.START: %s\n", rest_start);
	return (rest_start);
}

char	*ft_read_file(int fd, char *buffer)
{
	int		chars_read;	
	char	*buf;

	chars_read = 1;
	if (buffer == NULL) 
	{
		buffer = (char *)malloc(sizeof(char*)*1);
		buffer[0] = '\0';
	}
	if (!buffer)
		return NULL;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
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
	printf("READ.FILE-BUF: %s\n", buf);
	printf("READ.FILE-BUFFER: %s\n", buffer);
	free(buf);
	return (buffer);
}
