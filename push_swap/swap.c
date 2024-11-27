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
	write(1, "SWAP A\n", 7);
}

