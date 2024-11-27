/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:30:49 by marvin            #+#    #+#             */
/*   Updated: 2024/11/27 16:30:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "pswap.h"

void	swap_a(long *stack_a, int *nums_in_stack_a)
{
	long	*temp;

	temp = (long *)malloc(sizeof (long));
	if (nums_in_stack_a[1] > 1)
	{
		temp[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp[0];
	}
	free(temp);
	write(1, "SWAP_A\n", 7);
}

void	swap_b(long *stack_b, int *nums_in_stack_b)
{
	long	*temp;

	temp = (long *)malloc(sizeof(long));
	if (*nums_in_stack_b > 1)
	{
		temp[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp[0];
	}
	free(temp);
	write(1, "SWAP_B\n", 7);
}

void	swap_both(long *stack_a, long *stack_b, int *nums_in_stack_a,
int *nums_in_stack_b)
{
	long	*temp;

	temp = (long *)malloc(sizeof(long));
	if (nums_in_stack_a[1] > 1)
	{
		temp[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp;
	}
	if (*nums_in_stack_b > 1)
	{
		temp[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp[0];
	}
	free(temp);
	write(1, "SWAP_A+B\n", 9);
}
