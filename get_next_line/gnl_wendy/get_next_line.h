/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:53:25 by vemichal          #+#    #+#             */
/*   Updated: 2024/08/02 18:57:19 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stddef.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_get_rest(char *buffer);
char	*ft_get_line(char *buffer);
char	*read_file(int fd, char *buffer);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_free(char *buffer, char *new_read_buffer);
void	*ft_calloc(size_t nitems, size_t size);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *str);

#endif