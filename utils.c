/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:59:34 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/05 17:13:55 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_oops(void)
{
	ft_printf("Error\n");
	exit(EXIT_SUCCESS);
}

int	ft_check_dup(t_list *stack_a)
{
	t_list	*current;
	t_list	*comp;

	current = stack_a;
	while (current != NULL)
	{
		comp = current->next;
		while (comp != NULL)
		{
			if (current->content == comp->content)
				ft_error_oops ();
			comp = comp->next;
		}
		current = current->next;
	}
	return (1);
}

void	ft_loop_list(t_list *stack)
{
	t_list	*p_lst;

	p_lst = stack;
	while (p_lst->next != NULL)
	{
		p_lst = p_lst->next;
		printf("%d\n", p_lst->content);
	}
}
