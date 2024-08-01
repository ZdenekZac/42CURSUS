/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:04:46 by zac               #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/07/30 15:20:44 by zdoskoci         ###   ########.fr       */
=======
/*   Updated: 2024/07/31 20:06:42 by zac              ###   ########.fr       */
>>>>>>> e3f828910563940a2a6bf1363181cd99504ffb09
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

<<<<<<< HEAD
#include <stdlib.h>
#include <unistd.h>
=======
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 6
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h> 

char	*ft_strchr(const char *str, int c);
char	*get_next_line(int fd);
char	*read_file(int fd, char *buffer);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
>>>>>>> e3f828910563940a2a6bf1363181cd99504ffb09

char *get_next_line(int fd);
static char *ft_strjoin(char *s1, char *s2);
static char *ft_strdup(const char *s1);
static char *ft_strchr(const char *s, int c);
static size_t ft_strlen(const char *s);

#endif