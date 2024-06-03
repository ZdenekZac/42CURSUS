/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:26:11 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/05/30 15:56:30 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, nmemb * size);
	return (ptr);
}
/*
#include <stdio.h>
int	main()
{
	printf("%p\n", ft_calloc(5, sizeof(char)));
	return (0);
}
// norminette -R CheckForbiddenSourceHeader
// cc -Wall -Wextra -Werror ft_bzero.c ft_calloc.c
*/