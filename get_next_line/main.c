
//////////////////////
/////// m a i n //////
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:24:22 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/08/09 14:42:25 by zac              ###   ########.fr       */
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
	int fd = open("test3.txt", O_RDONLY);
	char *line;
	line = malloc(sizeof(char *) * 1);
	int i = 5;

    while (i > 0)
	{
	//printf("%s", get_next_line(fd));
	line = get_next_line(fd);
    printf("MAIN: %s\n", line);
	free(line);  // Don't forget to free the line to avoid memory leaks
	i--;
	}

// T E S T ---- 4:
<<<<<<< HEAD
// 	int fd2 = open("test3.txt", O_RDONLY);
//     if (fd2 == -1) {
//         perror("Error opening file");
//         return 1;
//     }

//     char *line;
//     int i = 6;
// 	int		chars_read2;
// 	chars_read2 = 1;
// 	char	*bufF;
// 	bufF = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));

//     while (chars_read2 > 0)
//     {
// 		chars_read2 = read(fd2, bufF, BUFFER_SIZE);
// 		 printf("CHARS_READ: -%d-\n", chars_read2);
// 		 printf("bufF: -%s-\n", bufF);
//         line = get_next_line(fd2);

//         printf("MAIN: -%s-\n", line);
//         free(line);
//         i--;
//     }
// 	close(fd2);
// 	return (0);
 }
=======
	int fd = open("test2.txt", O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    char *line;
    int i = 4;
	int j = 0;

    while (i > 0)
    {
        line = get_next_line(fd);
        // if (line == NULL) {
        //     break; // Stop if there are no more lines or an error occurs
        // }
        // printf("MAIN: %s\n", line);
        free(line); // Free the line to avoid memory leaks
        i--;
		j++;
		// printf("J: %d\n", j);
		// write(1,"aaaaaaa\n", 8);
    }
	close(fd);
	// printf("THIS IS THE END !!!!! %d\n", j);
	return (0);
}
>>>>>>> refs/remotes/origin/master

// cc -Wall -Wextra -Werror  get_next_line.c get_next_line.h get_next_line_utils.c main.c