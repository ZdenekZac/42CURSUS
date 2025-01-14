/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:38:18 by zac               #+#    #+#             */
/*   Updated: 2025/01/13 19:46:43 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

void	free_stack(long *stack_a, long *stack_b, int *nums_in_stack_a,
			int *nums_in_stack_b)
{
	free(stack_a);
	free(stack_b);
	free(nums_in_stack_a);
	free(nums_in_stack_b);
	exit(0);
}

int	stack_size(int argc, char **argv)
{
	int	i;
	int	size;

	i = 0;
	size = 1;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 32)
				size++;
			i++;
		}
	}
	else
		size = argc - 1;
	return (size);
}

int	repeated_numbers(long *stack_a, int nums_in_stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < nums_in_stack_a)
	{
		j = 0;
		while (j < nums_in_stack_a)
		{
			if ((stack_a[i] == stack_a[j]) && (i != j))
			{
				write(1, "Error\n", 6);
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_reallocation(long *pointer, int oldSize, int newSize)
{
	int		i;
	long	*temp;

	i = 0;
	if ((pointer != NULL) && (oldSize < newSize))
	{
		temp = malloc(sizeof (long) * newSize);
		while (i < oldSize)
		{
			temp[i] = pointer[i];
			i++;
		}
		pointer = temp;
	}
	else if ((pointer != NULL) && (oldSize > newSize))
	{
		temp = malloc(sizeof (long) * newSize);
		while (i < newSize)
		{
			temp[i] = pointer[i];
			i++;
		}
		pointer = temp;
	}
}

void	parameters(long *stack_a, long *stack_b, int *nums_stack_a,
			int *nums_stack_b)
{
	push_stack_a(stack_a, stack_b, nums_stack_a, nums_stack_b);
	rotate_stack_a(stack_a, nums_stack_a);
}
