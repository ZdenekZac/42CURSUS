/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 09:42:38 by zac               #+#    #+#             */
/*   Updated: 2024/06/11 12:39:28 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// - - NUMBER
void	ft_number(int number, int *length)
{
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*length) += 11;
		return ;
	}
	if (number < 0)
	{
		ft_putchar_length('-', length);
		ft_number(number * -1, length);
	}
	else
	{
		if (number > 9)
			ft_number(number / 10, length);
		ft_putchar_length(number % 10 + '0', length);
	}
}

// - - POINTER
void	ft_pointer(size_t pointer, int *length)
{
	char	string[25];
	int		i;
	char	*base_character;

	base_character = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	(*length) += 2;
	if (pointer == 0)
	{
		write(1, "0", 1);
		(*length)++;
		return ;
	}
	while (pointer != 0)
	{
		string[i] = base_character[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
	{
		ft_putchar_length(string[i], length);
	}
}

// - - HEX
void	ft_hexdcml(unsigned int x, int *len, char x_X)
{
	char	string[25];
	char	*base_characters;
	int		i;

	if (x_X == 'x')
		base_characters = "0123456789abcdef";
	else
		base_characters = "0123456789ABCDEF";
	i = 0;
	if (x == 0)
	{
		ft_putchar_length('0', len);
		return ;
	}
	while (x != 0)
	{
		string[i] = base_characters [x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putchar_length(string[i], len);
}

// UNSIGNED INT
void	ft_unsigned_int(unsigned int u, int *len)
{
	if (u >= 10)
		ft_unsigned_int(u / 10, len);
	ft_putchar_length(u % 10 + '0', len);
}
/*
int main()
{
	int length = 0;
	size_t p = 0;
	ft_pointer(p, &length);
	return (0);
}
*/