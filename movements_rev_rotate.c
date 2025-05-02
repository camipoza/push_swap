/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_rev_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:45:28 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/02 12:54:42 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void  ft_rev_rotate(t_list **stack)
{
    t_list *aux;
    if(ft_lstsize(*stack) < 2)
		return;
    aux = *stack;
    ft_lstlast(aux);
    ft_lstadd_front(stack, aux);
	
	while(((*stack)->next)->next != NULL)
		*stack = (*stack)->next;
    (*stack)->next = NULL;
}
void ft_rra(t_list **stack_a)
{
	ft_rev_rotate(stack_a);
	ft_printf("%s\n, rra");
}
void ft_rrb(t_list **stack_b)
{
	ft_rev_rotate(stack_b);
	ft_printf("%s\n, rrb");
}
void ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rev_rotate(stack_a);
	ft_rev_rotate(stack_b);
	ft_printf("%s\n, rrr");
}