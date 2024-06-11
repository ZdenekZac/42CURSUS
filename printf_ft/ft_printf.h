/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:50:30 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/06/11 11:09:44 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Standart C Libs

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

// Prototypes

void			ft_putchar_length(char character, int *length);
void			ft_string(char *args, int *length);

void			ft_number(int number, int *length);
void			ft_hexdcml(unsigned int x, int *len, char x_X);
void			ft_unsigned_int(unsigned int u, int *len);
void			ft_pointer(size_t pointer, int *length);

int				ft_printf(const char *string, ...);

#endif