/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:52:05 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/13 17:02:05 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void    ft_push(t_list **stack_src, t_list **stack_dest)
{
    t_list *aux;
	
	aux = *stack_src;
	*stack_src = (*stack_src)->next;
	aux->next = NULL;
	ft_lstadd_front(stack_dest, aux);
}
void    ft_pa(t_list **stack_b, t_list **stack_a)
{
	if(ft_lstsize(*stack_b) == 0)
		return;
    ft_push(stack_b, stack_a);
	ft_printf("pa\n");
}
void    ft_pb(t_list **stack_a, t_list **stack_b)
{
	if(ft_lstsize(*stack_a) == 0)
		return;
    ft_push(stack_a, stack_b);
	ft_printf("pb\n");
}

