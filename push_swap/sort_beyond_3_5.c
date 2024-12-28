/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_beyond_3_5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:00:54 by zac               #+#    #+#             */
/*   Updated: 2024/12/22 01:00:02 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

void	sort_a_section_of_the_stack(long *array, int *stack_size)
{
	long	i;
	long	j;
	long	temp;

	i = 0;
	j = 0;
	while (i < stack_size[0])
	{
		j = i + 1;
		while (j < stack_size[0])
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	swap_stack_a_first_time(long *copy, long *copy_swap_stack_a,
			long *stack_a, int *nums_in_stack_a)
{
	int	i;

	i = 0;
	while (i < nums_in_stack_a[0])
	{
		copy[i] = stack_a[i];
		copy_swap_stack_a[i] = stack_a[i];
		i++;
	}
}

void	swap_stack_a_second_time(long *copy, long *copy_swap_stack_a,
			long *stack_a, int *nums_in_stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < nums_in_stack_a[1])
	{
		j = 0;
		while (j < nums_in_stack_a[0])
		{
			if (copy_swap_stack_a[i] == copy [j])
				stack_a[i] = j;
			j++;
		}
		i++;
	}
}

void	swap_a_3_time(long *st_a, long *st_b, int *nums_a, int *nums_b)
{
	int	max_index;
	int	max_bits;
	int	loop_through[2];

	max_index = nums_a[1] - 1;
	max_bits = 0;
	loop_through[0] = 0;
	loop_through[1] = 0;
	while ((max_index >> max_bits) != 0)
		max_bits++;
	while (loop_through[0] < max_bits)
	{
		loop_through[1] = 0;
		while (loop_through[1] < nums_a[0])
		{
			if (((st_a[0] >> loop_through[0]) & 1) == 1)
				rotate_stack_a(st_a, nums_a);
			else
				push_stack_b(st_a, st_b, nums_a, nums_b);
			loop_through[1]++;
		}
		while (*nums_b != 0)
			push_stack_a(st_a, st_b, nums_a, nums_b);
		loop_through[0]++;
	}
}

void	sort_beyond_3_and_5_nums(long *stack_a, long *stack_b,
			int *nums_in_stack_a, int *nums_in_stack_b)
{
	long	*copy;
	long	*copy_swap_stack_a;

	copy = (long *)malloc(nums_in_stack_a[0] * sizeof(long));
	copy_swap_stack_a = (long *)malloc(nums_in_stack_a[0] * sizeof(long));
	swap_stack_a_first_time(copy, copy_swap_stack_a, stack_a,
		nums_in_stack_a);
	sort_a_section_of_the_stack(copy, nums_in_stack_a);
	swap_stack_a_second_time(copy, copy_swap_stack_a, stack_a,
		nums_in_stack_a);
	free(copy);
	free(copy_swap_stack_a);
	swap_a_3_time(stack_a, stack_b, nums_in_stack_a, nums_in_stack_b);
}

// loop_through[0] = bit possition
// loop_through[1] = current index