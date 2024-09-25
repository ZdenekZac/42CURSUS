/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:04:46 by zac               #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/08/09 14:30:54 by zac              ###   ########.fr       */
=======
/*   Updated: 2024/08/06 15:11:55 by zdoskoci         ###   ########.fr       */
>>>>>>> refs/remotes/origin/master
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 999
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h> 

char	*ft_clear_line(char *newline);
char	*get_next_line(int fd);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *str, int c);
char	*ft_loop(char *buf, char *buffer, int fd);
char	*ft_rest_start(char *temp);
char	*ft_read_file(int fd, char *buffer);
char	*ft_strdup(char *s);

#endif