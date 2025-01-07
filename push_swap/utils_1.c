/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:38:18 by zac               #+#    #+#             */
/*   Updated: 2025/01/07 21:40:34 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

void	freeStack(long *stack_a, long *stack_b, int *nums_in_stack_a, int *nums_in_stack_b)
{
	free(stack_a);
	free(stack_b);
	free(nums_in_stack_a);
	free(nums_in_stack_b);
	exit(0);
}