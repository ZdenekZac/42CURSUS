#ifndef PSWAP_H
# define PSWAP_H

void	rotate_stack_b(long *stack_b, int *numbers_in_stack_b);
void	rotate_stack_a(long *stack_a, int *numbers_in_stack_a)
void	rotate_stack_a_and_stack_b(long *stack_a, long *stack_b,
			int *numbers_in_stack_a, int *numbers_in_stack_b);
void	reverse_rotate_stack_a(long *stack_a, int *numbers_in_stack_a);
void	reverse_rotate_stack_b(long *stack_b, int *numbers_in_stack_b);
void	reverse_rotate_stack_a_and_stack_b(long *stack_a, long *stack_b,
			int *numbers_in_stack_a, int *numbers_in_stack_b);
void	swap_a(long *stack_a, int *nums_in_stack_a);
void	swap_b(long *stack_b, int *nums_in_stack_b);
void	swap_both(long *stack_a, long *stack_b, int *nums_in_stack_a,
int *nums_in_stack_b);

#endif