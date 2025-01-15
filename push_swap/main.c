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