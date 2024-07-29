/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:24:22 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/07/29 17:44:52 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
	int fd = open("test.txt", O_RDONLY);
	// get_next_line(fd);  
	char *line;
	int i = 3;
    // Read and print lines from standard input (fd 0)
    while (i > 0)
	{
	line = get_next_line(fd);
    printf("%s", line);
	free(line);  // Don't forget to free the line to avoid memory leaks
	i--;
	}
    
	return (0);
}

//cc get_next_line.c get_next_line.h get_next_line_utils.c main.c 