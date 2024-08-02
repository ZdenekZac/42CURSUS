/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:24:22 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/08/02 19:16:13 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
// T E S T ---- 1:
	int fd = open("test.txt", O_RDONLY);
	char *line;
	line = get_next_line(fd);
	printf("main - line: --%s--\n", line);
	
// T E S T ---- 2:	
	// int fd = 0;
	// char *line;
	// while(fd == 0)
	// {
	// line = get_next_line(fd);
    // printf("%s\n", line);
	// }

// T E S T ---- 3;
	// int fd = open("test.txt", O_RDONLY);
	// char *line;
	// int i = 5;
    // while (i > 0)
	// {
	// line = get_next_line(fd);
    // printf("%s", line);
	// //free(line);  // Don't forget to free the line to avoid memory leaks
	// i--;
	// }

	return (0);
}

// cc -Wall -Wextra -Werror  get_next_line.c get_next_line.h get_next_line_utils.c main.c  asf