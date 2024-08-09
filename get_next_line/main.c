/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:24:22 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/08/05 22:07:30 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
// T E S T ---- 1:
	// int fd = open("test.txt", O_RDONLY);
	// char *line;
	// line = get_next_line(fd);
	// printf("main - line: --%s--\n", line);
	
// T E S T ---- 2:	
	// int fd = 0;
	// char *line;
	// while(fd == 0)
	// {
	// line = get_next_line(fd);
    // printf("%s\n", line);
	// }

// T E S T ---- 3:
	// int fd = open("test3.txt", O_RDONLY);
	// char *line;
	// line = malloc(sizeof(char *) * 1);
	// int i = 15;

    // while (fd > 0)
	// {
	// //printf("%s", get_next_line(fd));
	// line = get_next_line(fd);
    // printf("MAIN: %s\n", line);
	// free(line);  // Don't forget to free the line to avoid memory leaks
	// i--;
	// }

// T E S T ---- 4:
	int fd = open("test.txt", O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    char *line;
    int i = 4;

    while (i > 0)
    {
        line = get_next_line(fd);
        // if (line == NULL) {
        //     break; // Stop if there are no more lines or an error occurs
        // }
        printf("MAIN: -%s-\n", line);
        free(line); // Free the line to avoid memory leaks
        i--;
		write(1,"aaaaaaa\n", 8);
    }
	close(fd);
	return (0);
}

// cc -Wall -Wextra -Werror  get_next_line.c get_next_line.h get_next_line_utils.c main.c