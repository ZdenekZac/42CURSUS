/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:19:04 by zac               #+#    #+#             */
/*   Updated: 2025/01/01 03:17:59 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

void	reverse_rotate_stack_a(long *stack_a, int *numbers_in_stack_a)
{
	int		i;
	long	*temp;

	i = numbers_in_stack_a[1] - 1;
	temp = (long *)malloc(sizeof(long));
	*temp = stack_a[numbers_in_stack_a[1] - 1];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = *temp;
	free(temp);
	write(1, "REVERSE ROTATE A\n", 17);
}

void	reverse_rotate_stack_b(long *stack_b, int *numbers_in_stack_b)
{
	int		i;
	long	*temp;

	i = *numbers_in_stack_b - 1;
	temp = (long *)malloc(sizeof(long));
	*temp = stack_b[*numbers_in_stack_b - 1];
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = *temp;
	free(temp);
	write(1, "REVERSE A+B\n", 12);
}

void	reverse_rotate_stack_a_and_stack_b(long *stack_a,
			long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	int		i;
	long	*temp;

	i = numbers_in_stack_b[1] - 1;
	temp = (long *)malloc(sizeof(long));
	*temp = stack_a[numbers_in_stack_a[1] - 1];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = *temp;
	i = 0;
	*temp = stack_b[0];
	while (i < *numbers_in_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[*numbers_in_stack_b - 1] = *temp;
	free(temp);
	write(1, "REVERSE A+B\n", 12);
}
