/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pswap.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zac <zac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:23:57 by zac               #+#    #+#             */
/*   Updated: 2025/01/13 19:46:58 by zac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSWAP_H
# define PSWAP_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>

void	push_stack_a(long *stack_a, long *stack_b, int *num_in_stack_a,
			int *num_in_stack_b);
void	push_stack_b(long *stack_a, long *stack_b, int *num_in_stack_a,
			int *num_in_stack_b);
void	reverse_rotate_stack_a(long *stack_a, int *numbers_in_stack_a);
void	rotate_stack_a(long *stack_a, int *nums_stack_a);
void	rotate_stack_b(long *stack_b, int *nums_stack_b);
void	rotate_a_and_b(long *stack_a, long *stack_b, int *nums_a, int *nums_b);
void	swap_stack_a(long *stack_a, int *nums_in_a);
void	sort_3_nums(long *stack_a, int	*nums_in_a);
void	sort_5_nums(long *stack_a, long *stack_b, int *nums_stack_a,
			int *nums_stack_b);
void	sort_beyond_3_and_5_nums(long *stack_a, long *stack_b,
			int *nums_in_stack_a, int *nums_in_stack_b);
int		repeated_numbers(long *stack_a, int nums_in_stack_a);
void	free_stack(long *stack_a, long *stack_b, int *nums_in_stack_a,
			int *nums_in_stack_b);
void	parameters(long *stack_a, long *stack_b, int *nums_stack_a,
			int *nums_stack_b);

#endif