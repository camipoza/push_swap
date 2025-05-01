/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:00:21 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/01 16:49:43 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void    ft_swap(t_list **stack)
{
    t_list *aux;
    t_list *aux2;
    
	if(ft_lstsize(*stack) < 2)
		return;
    aux = *stack;
    aux2 = aux->next;

    *stack = aux2;
	aux2->next = aux;
}
void    ft_sa(t_list **stack_a)
{
	ft_swap(stack_a);
	ft_printf("%s\n, sa");
}

void    ft_sb(t_list **stack_b)
{
	ft_swap(stack_b);
	ft_printf("%s\n, sb");
}
void    ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_printf("%s\n, ss");
}
