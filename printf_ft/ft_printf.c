/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:15:20 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/06/11 12:50:11 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_check(char s, va_list *args, int *len, int *i)
{
	if (s == 's')
		ft_string(va_arg(*args, char *), len);
	else if (s == 'd' || s == 'i')
		ft_number(va_arg(*args, int), len);
	else if (s == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (s == 'x')
		ft_hexdcml(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		ft_hexdcml(va_arg(*args, unsigned int), len, 'X');
	else if (s == 'p')
		ft_pointer(va_arg(*args, size_t), len);
	else if (s == 'c')
		ft_putchar_length(va_arg(*args, int), len);
	else if (s == '%')
		ft_putchar_length('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			ft_printf_check(string[i], &args, &length, &i);
			i++;
		}
		else
		{
			ft_putchar_length((char)string[i], &length);
			i++;
		}
	}
	va_end(args);
	return (length);
}
// int main()
// {
// 	char *s = "hello";
// 	ft_printf("%s", s);
// 	return (0);
// }
// // cc -Wall -Wextra -Werror ft_printf.c ft_words.c ft_numbers.c 