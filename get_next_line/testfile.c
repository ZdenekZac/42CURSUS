/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:18:10 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/07/29 09:34:54 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h> 

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


char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
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

int main()
{
	int		fd;
	char	*buf; //get rid of 100 and malloc instead
	int		chars_read;
	int		bufSize;
	char	*finalString;


	bufSize = 3;
	buf  = malloc(sizeof(char) * (bufSize + 1));
	if (!buf)
	{
		perror("failed to malloc buf");
		return (1);
	}
	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("failded to open file-(fd) dude!");
		free(buf);
		return (1);
	}
	finalString = malloc(sizeof(char) * 50);
	if(!finalString)
	{
		perror("finalString failed bro!");
		free(buf);
		close(fd);
		return (1);
	}
	finalString[0] = '\0';

	while((chars_read = read(fd, buf, bufSize)) > 0)
	{
		char *temp;
		buf[chars_read] = '\0';
		temp = ft_strjoin(finalString, buf);
		if (!temp)
		{
			perror("failed to join strings-(temp)");
			free(finalString);
			free(buf);
			close(fd);
			return (1);
		}
		free(finalString);
		finalString = temp;
		printf("before: %s\n", finalString);
		printf("%s\n", temp);
		ft_bzero(buf, bufSize + 1);
	}
	if (chars_read == -1)
	{
		perror("Failed to read file (chars_read)!");
	}

	printf("finalString:\n %s", finalString);
	free(buf);
	close(fd);
	return (0);
}
//valgrind --leak-check=full ./a.out 