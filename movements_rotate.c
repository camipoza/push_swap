/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:45:07 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/02 12:51:32 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void  ft_rotate(t_list **stack)
{
	t_list *aux;

	if(ft_lstsize(*stack) < 2)
		return;
	aux = *stack;
	aux->next = NULL;
	ft_lstadd_back(stack, aux);
	*stack = (*stack)->next;
}

void ft_ra(t_list **stack_a)
{
	ft_rotate(stack_a);
	ft_printf("%s\n, ra");
}

void ft_rb(t_list **stack_b)
{
	ft_rotate(stack_b);
	ft_printf("%s\n, rb");

}

void ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_printf("%s\n, rb");
}
