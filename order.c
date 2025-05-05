/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:03:20 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/05 17:32:53 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_order(t_list **stack_a)
{
    t_list  *check;
    t_list  *comp;

    check = *stack_a;
    while (check->next != NULL)
	{
    	comp = check->next;
		while (comp->next != NULL)
    	{
			if (check->content > comp->content)
			{
				ft_printf("desordenaos");
           		return(0);
			}
			comp = comp->next;
    	}
   		 check = check->next;
	}
	ft_printf("ordenaos");
	return(1);
}

void    ft_sort(t_list *stack_a)
{
	if(ft_lstsize(stack_a) == 2)
		ft_sa(stack_a);
	if(ft_lstsize(stack_a) == 3)
		ft_sort_three(stack_a);
	// if(ft_lstsize(stack_a) > 3)
	// 	ft_ksort(stack_a);
}
void	ft_sort_three(t_list *stack_a)
{
	t_list	*first;
	t_list	*third;

	first = stack_a;
	if(first->content < first->next->content)
	{
		third = first->next->next;
		if(first->next->content > third->content && third->content > first-> content)
		{
			ft_sa(stack_a);
			ft_ra(stack_a);
		}
		else
			ft_rra(stack_a);
	}
}