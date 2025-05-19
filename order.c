/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:03:20 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/19 15:55:34 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_sort_fourtosix(t_list **stack_a, t_list **stack_b)
{
	int len;
	int	iter;
	int min_index;
	
	len = ft_lstsize(*stack_a);
	iter = 0;
	while (iter++ < len - 3)
	{
		min_index = ft_get_min_index(*stack_a);
		if (ft_count_rot(*stack_a, min_index) <= len / 2)
			while((*stack_a)->index != min_index)
				ft_ra(stack_a);
		else
			while((*stack_a)->index != min_index)
				ft_rra(stack_a);
		if((ft_check_order(stack_a)) && (ft_lstsize(*stack_b) == 0))
			return;
		ft_pb(stack_a, stack_b);
	}
	if(!ft_check_order(stack_a))
		ft_sort_three(stack_a);
	while(ft_lstsize(*stack_b) != 0)
		ft_pa(stack_b, stack_a);
}
void	ft_ksort1(t_list **stack_a, t_list **stack_b, int len_a)
{
	int		i;
	int		range;

	range =  (ft_sqrt(len_a) * 1.4);
	
	
}

 void    ft_sort(t_list **stack_a, t_list **stack_b)
{
	int len_a;

	len_a = ft_lstsize(*stack_a);
	if ( len_a == 2)
		ft_sa(stack_a), ft_printf("sort 2\n");
		
	else if (len_a == 3)
		ft_sort_three(stack_a), ft_printf("sort 3\n"); 
		
	 else if (len_a > 3 && len_a <= 6)
	{
		ft_put_index(stack_a);
		//ft_print_list(*stack_a);
		ft_printf("sort 4-6\n");
		ft_sort_fourtosix(stack_a, stack_b);
	}

	 else if (len_a >= 7)
	{
		ft_put_index(stack_a);
		ft_ksort1(stack_a, stack_b, len_a);
		//ft_ksort2(stack_a, stack_b);

	} 
}
