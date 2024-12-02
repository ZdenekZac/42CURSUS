/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:19:22 by zac               #+#    #+#             */
/*   Updated: 2024/11/26 23:21:33 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

void	rotate_stack_a(long *stack_a, int *nums_stack_a)
{
	int		i;
	long	*temp;

	i = 0;
	temp = (long *)malloc(sizeof(long));
	*temp = stack_a[0];
	while (i < nums_stack_a[1])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[nums_stack_a[1] - 1] = *temp;
	free(temp);
	write(1, "ROTATE-A\n", 9);
}

void	rotate_stack_b(long *stack_b, int *nums_stack_b)
{
	int		i;
	long	*temp;

	i = 0;
	temp = (long *)malloc(sizeof(long));
	*temp = stack_b[0];
	while (i < *nums_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[nums_stack_b[1] - 1] = *temp;
	free(temp);
	write(1, "ROTATE-A\n", 9);
}

void	rotate_a_and_b(long *stack_a, long *stack_b, int *nums_a, int *nums_b)
{
	int		i;
	long	*temp;

	i = 0;
	temp = (long *)malloc(sizeof(long));
	*temp = stack_a[0];
	while (i < nums_a[1])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[nums_a[1] - 1] = *temp;
	i = 0;
	*temp = stack_b[0];
	while (i < *nums_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[*nums_b - 1] = *temp;
	free(temp);
	write(1, "ROTATE A+B\n", 11);
}
