/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:26:16 by vmoroz            #+#    #+#             */
/*   Updated: 2024/10/21 20:11:58 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	const char	*csrc;
	char		*cdest;

	cdest = (char *)dest;
	csrc = (const char *)src;
	if (dest == NULL && src == NULL)
		return (dest);
	if (src < dest)
		while (n--)
			cdest[n] = csrc[n];
	else
		while (n--)
			*cdest++ = *csrc++;
	return (dest);
}

int	main(void)
{
	char src[] = "hey man whats up";
	char dest[30];
	ft_memmove(dest, src, 3);
	printf("dest = %s\n", dest);
	return (0);
}