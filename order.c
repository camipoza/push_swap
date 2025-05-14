/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:03:20 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/14 18:26:32 by cpoza-ra         ###   ########.fr       */
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
		while (comp != NULL)
    	{
			if (check->content > comp->content)
			{
				ft_printf("desordenaos\n");
           		return(0);
			}
			comp = comp->next;
    	}
   		 check = check->next;
	}
	ft_printf("ordenaos\n");
	return(1);
}
void	ft_sort_three(t_list **stack_a)
{
	t_list	*third;

	third = (*stack_a)->next->next;
	if ((*stack_a)->content < (*stack_a)->next->content)
	{
		if((*stack_a)->content < third->content)
			(ft_sa(stack_a), ft_ra(stack_a));
		else
		{
				ft_rra(stack_a);
		}
	}
	else if((*stack_a)->content > (*stack_a)->next->content)
	{
		if((*stack_a)->content > third->content)
			ft_ra(stack_a);
		else if((*stack_a)->content < third->content)
			ft_sa(stack_a);
		else  if ((*stack_a)->next->content > third->content)
			ft_sa(stack_a), ft_rra(stack_a);
	}
}

void	ft_sort_fourtoseven(t_list *stack_a, t_list *stack_b)
{
	int len;
	int	iter;
	int min_index;
	
	len = ft_lstsize(stack_a);
	iter = 0;
	while (iter++ < len - 3)
	{
		min_index = ft_get_min_index(stack_a);
		if (ft_count_rot(stack_a, min_index) <= len / 2)
			while(stack_a->index != min_index)
				ft_ra(&stack_a);
		else
			while(stack_a->index != min_index)
				ft_rra(&stack_a);
		if((ft_check_order(&stack_a)) && (ft_lstsize(stack_b) == 0))
			return;
		ft_pb(&stack_a, &stack_b);
	}
	ft_sort_three(&stack_a);
	while(ft_lstsize(stack_b) != 0)
		ft_pa(&stack_b, &stack_a);
}

 void    ft_sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 2)
		ft_sa(stack_a), ft_printf("sort 2\n");
		
	else if (ft_lstsize(*stack_a) == 3)
		ft_sort_three(stack_a), ft_printf("sort 3\n"); 
		
	 else if (ft_lstsize(*stack_a) > 3 && ft_lstsize(*stack_a) <= 7)
	{
		ft_put_index(stack_a);
		ft_printf("sort 4-7\n");
		ft_sort_fourtoseven(*stack_a, *stack_b);
	}

	 else if (ft_lstsize(*stack_a) > 5)
	{
		ft_put_index(stack_a);
		//ft_ksort1(stack_a, stack_b);
	} 
}
