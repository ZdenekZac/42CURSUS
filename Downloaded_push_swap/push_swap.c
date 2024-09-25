/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <vmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:07:25 by vmoroz            #+#    #+#             */
/*   Updated: 2024/07/19 14:08:51 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc < 2)
		exit(EXIT_SUCCESS);
	else if (!make_stacks(&a, &b, argc, argv))
		ft_putstr_fd("Error\n", 2);
	else if (find_duplicates(a))
		ft_putstr_fd("Error\n", 2);
	else
		sort(&a, &b);
	free(a.stack);
	free(b.stack);
}
