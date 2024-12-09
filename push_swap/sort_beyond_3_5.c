/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_beyond_3_5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:00:54 by zac               #+#    #+#             */
/*   Updated: 2024/12/09 07:49:50 by zac              ###   ########.fr       */
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

void	swap_stack_a_third_time(long *stack_a, long *stack_b,
			int *nums_in_stack_a, int *nums_in_stack_b)
{
	int	max_index;
	int	max_bits;
	int	bit_position;
	int	current_index;

	max_index = nums_in_stack_a[1] - 1;
	max_bits = 0;
	bit_position = 0;
	current_index = 0;
	while ((max_index >> max_bits) != 0)
		max_bits++;
	while (bit_position < max_bits)
	{
			
	}
}
