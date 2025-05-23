/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:26:51 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/23 20:07:36 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		nums;
	t_list	*stack_a;
	t_list	*stack_b;

	nums = 0;
	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	else if (!argv[1][0])
		ft_error_oops();
	stack_a = ft_parsing(argv);
	ft_check_dup(stack_a);
	if (!ft_check_order(&stack_a))
		ft_sort(&stack_a, &stack_b);
	ft_freenode(&stack_a);
	ft_freenode(&stack_b);
	return (0);
}
