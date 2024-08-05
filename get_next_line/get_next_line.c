/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:55:09 by zac               #+#    #+#             */
/*   Updated: 2024/08/05 15:50:24 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char			*line;
	static 	char	*buffer;

	buffer = ft_read_file(fd, buffer);
	if (!buffer)
		return (NULL);

	line = ft_clear_line(buffer);
	buffer = ft_rest_start(buffer);
	printf("LINE: %s\n", line);
	//printf("BUFFER: %s\n", buffer);
	return (line);
}

