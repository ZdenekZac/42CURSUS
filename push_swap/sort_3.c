/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:51:42 by zac               #+#    #+#             */
/*   Updated: 2024/11/30 16:50:27 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

void	sort_3_nums(long *stack_a, int	*nums_in_a)
{
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] < stack_a[2])
		&& (stack_a[0] > stack_a[2]))
		rotate_stack_a(stack_a, nums_in_a);
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] < stack_a[2])
		&& (stack_a[0] < stack_a[2]))
		swap_stack_a(stack_a, nums_in_a);
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] > stack_a[2])
		&& (stack_a[0] > stack_a[2]))
	{
		swap_stack_a(stack_a, nums_in_a);
		reverse_rotate_stack_a(stack_a, nums_in_a);
	}
	if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2])
		&& (stack_a[0] < stack_a[2]))
	{
		swap_stack_a(stack_a, nums_in_a);
		rotate_stack_a(stack_a, nums_in_a);
	}
	if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2])
		&& (stack_a[0] > stack_a[2]))
		reverse_rotate_stack_a(stack_a, nums_in_a);
}
