/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:56:28 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/24 16:58:29 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

#include <stdio.h>
int main() {
	int n = 'R';
    printf("%c\n",ft_tolower(n));
	printf("%c\n",ft_tolower('E'));

    return (0);
}
//norminette -R CheckForbiddenSourceHeader
//cc -Wall -Wextra -Werror
