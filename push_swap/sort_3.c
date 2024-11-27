/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:17:03 by marvin            #+#    #+#             */
/*   Updated: 2024/11/27 17:17:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "pswap.h"

void	sort_3(long *stack_a, int *nums_in_stack_a)
{
	// 2,1,3
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] < stack_a[2]) && (stack_a[0] < stack_a[2]))
		swap_a(stack_a, nums_in_stack_a);
	// 3,2,1
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0] > stack_a[2]))
	{
		swap_a(stack_a, nums_in_stack_a);
		reverse_rotate_stack_b(stack_a, nums_in_stack_a);
	}
	// 3,1,2
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] < stack_a[2]) && (stack_a[0]) > stack_a[2])
		rotate_stack_a(stack_a, nums_in_stack_a);
	//1,3,2
	if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0]) < stack_a[2])
	{
		swap_a(stack_a, nums_in_stack_a);
		rotate_stack_a(stack_a, nums_in_stack_a);
	}
	// 2,3,1
	if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0]) > stack_a[2])
		reverse_rotate_stack_b(stack_a, nums_in_stack_a);
}