/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:18:10 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/07/25 00:04:59 by zac              ###   ########.fr       */
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
	char	*storage;
	char	testString[50];	
	char	*finalString;
	char	test1[]="hello";
	char	test2[]="world";
	char	test3[]="again";

		// finalString = ft_strjoin(test1,test2);
		// printf("%s", finalString);
		// finalString = ft_strjoin(finalString,test2);
		// printf("%s", finalString);
	
	bufSize = 12;
	buf  = malloc(sizeof(char) * (bufSize + 1));
	fd = open("test2.txt", O_RDONLY);
	finalString = malloc(sizeof(char) * 50);
	//while((chars_read = read(fd, buf, bufSize)))
	while((chars_read = read(fd, buf, bufSize)))
	{
		finalString = ft_strjoin(finalString, buf);
		//ft_strcpy(testString, buf);
		printf("%s\n", finalString);
		ft_bzero(buf,13);
	}
	return (0);
}
//valgrind --leak-check=full ./a.out