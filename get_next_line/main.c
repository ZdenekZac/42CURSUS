/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:24:22 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/07/31 14:59:28 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

int main()
{
	int fd = open("test.txt", O_RDONLY);
	// get_next_line(fd);  
	//char *line;
	int i = 3;
    // Read and print lines from standard input (fd 0)
    // while (i > 0)
	// {
	// // line = get_next_line(fd);
    // printf("%s", get_next_line(fd));

	// //free(line);  // Don't forget to free the line to avoid memory leaks
	// i--;
	// }
	char *buf = "CCDDAAEBB";
    printf("%s", ft_strchr(buf, 'E'));

	return (0);
}
//cc get_next_line.c get_next_line.h get_next_line_utils.c main.c 