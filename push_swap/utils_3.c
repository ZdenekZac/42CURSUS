/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:49:55 by marvin            #+#    #+#             */
/*   Updated: 2025/01/14 15:49:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = str[i] - '0' + (res * 10);
		i++;
	}
	return (res * neg);
}

void	free_string(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
}

int	nums_input(long *stack_a, int *nums_in_stack_a, char **argv,
		char **nums_list)
{
	int	i;
	int	nums;

	i = 0;
	nums = 0;
	nums_list = ft_split(argv[1], 32);
	while (nums_list[i])
	{
		nums++;
		i++;
	}
	nums_in_stack_a[0] = nums;
	nums_in_stack_a[1] = nums_in_stack_a[0];
	i = 0;
	while (i < nums_in_stack_a[0])
	{
		stack_a[i] = ft_atoi(nums_list[i]);
		i++;
	}
	free_string(nums_list);
	free(nums_list);
	return (0);
}

int	standart_input(long *stack_a, int *nums_in_stack_a, char **argv)
{
	int	i;

	i = 0;
	while (i < nums_in_stack_a[1])
	{
		if (only_nums_in_stack(argv[i + 1]) == 1)
			stack_a[i] = ft_atoi(argv[i + 1]);
		else
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}

int	separate_input_numbers(long *stack_a, int *nums_stack_a, char **argv)
{
	char	**nums_list;

	nums_list = NULL;
	if (nums_stack_a[0] == 1)
	{
		if (nums_input(stack_a, nums_stack_a, argv, nums_list) == -1)
			return (-1);
	}
	else
	{
		if (standart_input(stack_a, nums_stack_a, argv) == -1)
			return (-1);
	}
	if (repeated_numbers(stack_a, nums_stack_a[1]) == -1)
		return (-1);
	if (nums_limits(stack_a, nums_stack_a[1] == -1))
		return (-1);
	return (0);
}
