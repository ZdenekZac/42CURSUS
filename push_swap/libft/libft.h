/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 21:25:41 by zac               #+#    #+#             */
/*   Updated: 2024/10/22 20:55:05 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

# include <inttypes.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// LIBFT FUNCTIONS
size_t				ft_strlen(const char *s);				//DONE
int					ft_atoi(const char *str);				//DONE
void				ft_bzero(void *dest, size_t n);			//DONE
void				*ft_calloc(size_t num, size_t size);	//DONE
int					ft_isalnum(int c);						//DONE
int					ft_isalpha(int c);						//DONE
int					ft_isascii(int c);						//DONE
int					ft_isdigit(int c);						//DONE
int					ft_isprint(int c);						//DONE
void				*ft_memchr(const void *src, int chr, size_t n);		//DONE
int					ft_memcmp(void *str1, const void *str2, size_t n);	//DONE
void				*ft_memcpy(void *dest, const void *src, size_t n);	//DONE
void				*ft_memmove(void *dest, const void *src,
						unsigned int n); //DONE
void				*ft_memset(void *dest, int value, size_t count);	//DONE
char				*ft_strchr(const char *str, int ch);
char				*ft_strdup(char *src);
char				*ft_strjoin(char const *s1, char const *s2);
unsigned int		ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlcpy(char *dest, const char *src, size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *str1, const char *str2, size_t len);
char				*ft_strrchr(const char *str, int chr);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

// STRUCTS GONNA BE BELOW

#endif