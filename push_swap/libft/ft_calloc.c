/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 22:01:01 by zac               #+#    #+#             */
/*   Updated: 2024/08/11 05:17:48 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = num * size;
	if (num == 0 || size == 0)
	{
		ptr = malloc(0);
		return (ptr);
	}
	if (total_size / num != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

// int main(void)
// {
// 	int *arr = (int *)ft_calloc(5, sizeof(int));
// 	int	i;
// 	i = 0;

// 	if (arr)
// 	{
// 		while (i < 5)
// 		{
// 			printf("%d ", arr[i]);
// 			i++;
// 		}
// 		free(arr);
// 	}
// 	else
// 		printf("mem alloc. failed!!\n");
// 	return (0);
// }