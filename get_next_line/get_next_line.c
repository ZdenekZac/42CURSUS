/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:55:09 by zac               #+#    #+#             */
/*   Updated: 2024/07/30 16:19:51 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd) {
    static char *remainder;
    char buffer[BUFFER_SIZE + 1];
    char *newline;
    char *temp;
    ssize_t bytes_read;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);

    while ((newline = ft_strchr(remainder, '\n')) == NULL) {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read <= 0)
            break;
        buffer[bytes_read] = '\0';
        temp = ft_strjoin(remainder, buffer);
        free(remainder);
        remainder = temp;
    }

    if (bytes_read < 0 || (bytes_read == 0 && !remainder))
        return (NULL);

    if (newline) {
        *newline = '\0';
        temp = ft_strdup(remainder);
        remainder = ft_strdup(newline + 1);
        return (temp);
    } else {
        temp = ft_strdup(remainder);
        free(remainder);
        remainder = NULL;
        return (temp);
    }
}