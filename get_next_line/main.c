/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:24:22 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/08/01 18:28:55 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
	int fd = open("test.txt", O_RDONLY);

		printf("getNextLine is:%s", get_next_line(fd));
		//free(line);  // Don't forget to free the line to avoid memory leaks

	return (0);
}

// cc -Wall -Wextra -Werror  get_next_line.c get_next_line.h get_next_line_utils.c main.c  