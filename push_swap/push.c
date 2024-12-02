/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:39:10 by zac               #+#    #+#             */
/*   Updated: 2024/11/24 17:57:04 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

void	push_stack_a(long *stack_a, long *stack_b, int *num_in_stack_a,
			int *num_in_stack_b)
{
	int	i;

	(num_in_stack_a[1])++;
	i = num_in_stack_a[1] - 1;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = stack_b[0];
	i = 0;
	while (i < *num_in_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	(*num_in_stack_b)--;
	if (*num_in_stack_b == 0)
		stack_b = NULL;
	write(1, "Push Stack A\n", 13);
}

void	push_stack_b(long *stack_a, long *stack_b, int *num_in_stack_a,
			int *num_in_stack_b)
{
	int	i;

	(*num_in_stack_b)++;
	i = *num_in_stack_b - 1;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = stack_a[0];
	i = 0;
	while (i < num_in_stack_a[1])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	(num_in_stack_a[1])--;
	if (num_in_stack_a == 0)
		stack_a = NULL;
	write(1, "Push Stack B\n", 13);
}
