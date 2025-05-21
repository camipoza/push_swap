/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:00:21 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/21 19:58:37 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_list **stack)
{
	int	aux;
	int	aux2;

	if (ft_lstsize(*stack) < 2)
		return ;
	aux = (*stack)->content;
	aux2 = (*stack)->next->content;
	(*stack)->content = aux2;
	(*stack)->next->content = aux;
	aux = (*stack)->index;
	aux2 = (*stack)->next->index;
	(*stack)->index = aux2;
	(*stack)->next->index = aux;
}

void	ft_sa(t_list **stack_a)
{
	ft_swap(stack_a);
	ft_printf("sa\n");
}

void	ft_sb(t_list **stack_b)
{
	ft_swap(stack_b);
	ft_printf("sb\n");
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_printf("ss\n");
}
