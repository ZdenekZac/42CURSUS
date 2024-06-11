/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 09:04:20 by zac               #+#    #+#             */
/*   Updated: 2024/06/11 12:31:01 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//  write a character to the standard output and increment the length counter

void	ft_putchar_length(char character, int *length)
{
	write(1, &character, 1);
	(*length)++;
}

// write a string to the standard output and update the length counter.

void	ft_string(char *args, int *length)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		(*length) += 6;
		return ;
	}
	while (args[i])
	{
		ft_putchar_length(args[i], length);
		i++;
	}
}
/*
#include <stdio.h>
#include <stddef.h>
int main()
{
    int length = 0; // Initialize a length counter to 0.

    // Demonstrate writing individual characters.
    ft_putchar_length('H', &length);
    ft_putchar_length('e', &length);
    ft_putchar_length('l', &length);
    ft_putchar_length('l', &length);
    ft_putchar_length('o', &length);

    // Write a space character.
    ft_putchar_length(' ', &length);

    // Demonstrate writing a string.
    ft_string("world!", &length);

    // Write a newline character.
    ft_putchar_length('\n', &length);

    // Demonstrate writing a null string.
    ft_string(NULL, &length);

    // Write a final newline character.
    ft_putchar_length('\n', &length);

    // Print the total length.
    char buffer[50];
    int len = snprintf(buffer, sizeof(buffer),
	 "Total characters written: %d\n", length);
    write(1, buffer, len);
    return 0;
}
// norminette -R CheckForbiddenSourceHeader   
*/