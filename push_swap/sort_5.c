/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 21:50:32 by zac               #+#    #+#             */
/*   Updated: 2024/12/02 22:18:37 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

void	rotate_a_radix(long *stack_a, int *nums_stack_a)
{
	rotate_stack_a(stack_a, nums_stack_a);
	rotate_stack_a(stack_a, nums_stack_a);
}

void	reverse_rot_a_radix(long *stack_a, int *nums_stack_a)
{
	reverse_rotate_stack_a(stack_a, nums_stack_a);
	reverse_rotate_stack_a(stack_a, nums_stack_a);
}

void	first_stack(long *stack_a, long *stack_b, int *nums_stack_a,
			int *nums_stack_b)
{
	if (stack_a[0] > stack_b[0])
		push_stack_a(stack_a, stack_b, nums_stack_a, nums_stack_b);
	else if ((stack_b[0] > stack_a[0]) && (stack_b[0] < stack_a[1]))
	{
		rotate_stack_a(stack_a, nums_stack_a);
		push_stack_a(stack_a, stack_b, nums_stack_a, nums_stack_b);
		reverse_rotate_stack_a(stack_a, nums_stack_a);
	}
	else if ((stack_b[0] > stack_a[1]) && (stack_b[0] < stack_a[2]))
	{
		reverse_rotate_stack_a(stack_a, nums_stack_a);
		push_stack_a(stack_a, stack_b, nums_stack_a, nums_stack_b);
		reverse_rotate_stack_a(stack_a, nums_stack_a);
		reverse_rotate_stack_a(stack_a, nums_stack_a);
	}
	else if (stack_b[0] > stack_a[2])
	{
		push_stack_a(stack_a, stack_b, nums_stack_a, nums_stack_b);
		rotate_stack_a(stack_a, nums_stack_a);
	}
}

void	second_stack(long *stack_a, long *stack_b, int *nums_stack_a,
			int *nums_stack_b)
{
	if (stack_b[0] < stack_a[0])
		push_stack_a(stack_a, stack_b, nums_stack_a, nums_stack_b);
	else if ((stack_b[0] > stack_a[0]) && (stack_b[0] < stack_a[1]))
	{
		rotate_stack_a(stack_a, nums_stack_a);
		push_stack_a(stack_a, stack_b, nums_stack_a, nums_stack_b);
		reverse_rotate_stack_a(stack_a, nums_stack_a);
	}
	else if ((stack_b[0] > stack_a[1]) && (stack_b[0] < stack_a[2]))
	{
		rotate_stack_a(stack_a, nums_stack_a);
		push_stack_a(stack_a, stack_b, nums_stack_a, nums_stack_b);
		swap_stack_a(stack_a, nums_stack_a);
		reverse_rotate_stack_a(stack_a, nums_stack_a);
	}
	else if ((stack_b[0] > stack_a[2]) && (stack_b[0] < stack_a[3]))
	{
		reverse_rotate_stack_a(stack_a, nums_stack_a);
		push_stack_a(stack_a, stack_b, nums_stack_a, nums_stack_b);
		rotate_a_radix(stack_a, nums_stack_a);
	}
	else if (stack_b[0] > stack_a[3])
		parameters(stack_a, stack_b, nums_stack_a, nums_stack_b);
}

void	sort_5_nums(long *stack_a, long *stack_b, int *nums_stack_a,
			int *nums_stack_b)
{
	push_stack_b(stack_a, stack_b, nums_stack_a, nums_stack_b);
	push_stack_b(stack_a, stack_b, nums_stack_a, nums_stack_b);
	sort_3_nums(stack_a, nums_stack_a);
	while (*nums_stack_b != 0)
	{
		if (nums_stack_a[1] == 3)
			first_stack(stack_a, stack_b, nums_stack_a, nums_stack_b);
		else if (nums_stack_a[1] == 4)
			second_stack(stack_a, stack_b, nums_stack_a, nums_stack_b);
	}
}
