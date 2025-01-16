/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:58:03 by marvin            #+#    #+#             */
/*   Updated: 2025/01/15 13:58:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

void	free_and_exit(int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	free(numbers_in_stack_a);
	free(numbers_in_stack_b);
	exit(0);
}

void	free_and_exit_errors(int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	free(numbers_in_stack_a);
	free(numbers_in_stack_b);
	write(1, "Error\n", 6);
	exit(0);
}

void	check_parameter(int argc, char **argv, int *nums_in_stack_a,
			int *nums_in_stack_b)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc < 2)
		free_and_exit(nums_in_stack_a, nums_in_stack_b);
	while (i < argc)
	{
		if ((argv[i][ft_strlen(argv[i]) - 1] == ' ') || (argv[i][0] == ' '))
			free_and_exit_errors(nums_in_stack_a, nums_in_stack_b);
		j = 0;
		while (j < ft_strlen(argv[i]))
		{
			if (((argv[i][j] < 48) || (argv[i][j] > 57)) && (argv[i][j] != 32))
			{
				if (argv[i][j] != 45)
					free_and_exit_errors(nums_in_stack_a, nums_in_stack_b);
			}
			if ((argv[i][j] == 32) && (argv[i][j + 1] == 32))
				free_and_exit_errors(nums_in_stack_a, nums_in_stack_b);
			j++;
		}
		i++;
	}
}

void	set_inputs(int *nums_in_stack_a, int *nums_in_stack_b, int argc)
{
	nums_in_stack_a[0] = argc - 1;
	nums_in_stack_a[1] = nums_in_stack_a[0];
	*nums_in_stack_b = 0;
}

int	main(int argc, char **argv)
{
	long	*stack_a;
	long	*stack_b;
	int		*nums_in_stack_a;
	int		*nums_in_stack_b;

	nums_in_stack_a = (int *)malloc(2 * sizeof(int));
	nums_in_stack_b = (int *)malloc(sizeof(int));
	check_parameter(argc, argv, nums_in_stack_a, nums_in_stack_b);
	set_inputs(nums_in_stack_a, nums_in_stack_b, argc);
	stack_a = (long *)malloc(sizeof(long) * stack_size(argc, argv));
	stack_b = (long *)malloc(sizeof(long) * stack_size(argc, argv));
	if ((separate_input_numbers(stack_a, nums_in_stack_a, argv) == -1)
		|| (is_stack_sorted(stack_a, nums_in_stack_a) == 0))
		free_stack(stack_a, stack_b, nums_in_stack_a, nums_in_stack_b);
	if ((nums_in_stack_a[1] == 2) && (stack_a[0] > stack_a[1]))
		rotate_stack_a(stack_a, nums_in_stack_a);
	else if (nums_in_stack_a[1] == 3)
		sort_3_nums(stack_a, nums_in_stack_a);
	else if (nums_in_stack_a[1] == 5)
		sort_5_nums(stack_a, stack_b, nums_in_stack_a, nums_in_stack_b);
	else
		sort_beyond_3_and_5_nums(stack_a, stack_b, nums_in_stack_a,
			nums_in_stack_b);
	free_stack(stack_a, stack_b, nums_in_stack_a, nums_in_stack_b);
	return (0);
}
