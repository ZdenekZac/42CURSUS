/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:26:02 by vmoroz            #+#    #+#             */
/*   Updated: 2024/08/11 05:02:03 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;
	size_t	i;

	total_size = num * size;
	i = 0;
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
// num2 size3 tot=6 ---- 

// int	main(void)
// {
// 	int *arr = (int *)ft_calloc(5, sizeof(int));
// 	int i;
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
// 	{
// 		printf("Memory allocation failed.\n");
// 	}

// 	return (0);
// }