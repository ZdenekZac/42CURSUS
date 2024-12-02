/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 23:22:05 by zac               #+#    #+#             */
/*   Updated: 2024/11/30 15:49:28 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

void	swap_stack_a(long *stack_a, int *nums_in_a)
{
	long	*temp;

	temp = (long *)malloc(sizeof(long));
	if (nums_in_a[1] > 1)
	{
		temp[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp[0];
	}
	free(temp);
	write(1, "SWAP_A\n", 7);
}

void	swap_stack_b(long *stack_b, int *nums_in_b)
{
	long	*temp;

	temp = (long *)malloc(sizeof(long));
	if (*nums_in_b > 1)
	{
		temp[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp[0];
	}
	free(temp);
	write(1, "SWAP_B\n", 7);
}

void	swap_both(long *stack_a, long *stack_b,
int *nums_in_a, int *nums_in_b)
{
	long	*temp;

	temp = (long *)malloc(sizeof(long));
	if (nums_in_a[1] > 1)
	{
		temp[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp[0];
	}
	if (*nums_in_b > 1)
	{
		temp[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp[0];
	}
	free(temp);
	write(1, "SWAP_BOTH\n", 10);
}
