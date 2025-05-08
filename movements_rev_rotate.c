/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_rev_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:45:28 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/08 19:06:15 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void  ft_rev_rotate(t_list **stack)
{
    t_list *aux;
    t_list *last;
	
    if(ft_lstsize(*stack) < 2)
		return;
	aux = ft_almostlastnode(*stack);
    last = ft_lstlast(*stack);
    ft_lstadd_front(stack, last);
	aux->next = NULL;
}
void ft_rra(t_list **stack_a)
{
	ft_rev_rotate(stack_a);
	ft_printf("rra\n");
}
void ft_rrb(t_list **stack_b)
{
	ft_rev_rotate(stack_b);
	ft_printf("rrb\n");
}
void ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rev_rotate(stack_a);
	ft_rev_rotate(stack_b);
	ft_printf("rrr\n");
}