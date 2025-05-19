/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:03:20 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/19 18:31:43 by cpoza-ra         ###   ########.fr       */
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
	int		k;

	i = 0;
	k =  (ft_sqrt(len_a) * 1.4);
	while(*stack_a)
	{
		if((*stack_a)->index < i)
		{
			ft_pb(stack_a, stack_b);
			i++;
		}
		else if((*stack_a)->index < i + k)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
			i++;
		}
		else
			ft_ra(stack_a);
	}
}
void	ft_ksort2(t_list **stack_a, t_list **stack_b, int len_b)
{
	int		max_index;
	
	max_index = ft_get_target_index(*stack_b, len_b - 1);
	while (max_index > 0)
	{
		if (ft_count_rot(*stack_b, max_index) <= len_b / 2)
			while((*stack_b)->index != max_index)
				ft_rb(stack_b);
		else
			while((*stack_b)->index != max_index)
				ft_rrb(stack_b);
		ft_pb(stack_a, stack_b);
	}
}

 void    ft_sort(t_list **stack_a, t_list **stack_b)
{
	int len;

	len = ft_lstsize(*stack_a);
	if ( len == 2)
		ft_sa(stack_a), ft_printf("sort 2\n");
		
	else if (len == 3)
		ft_sort_three(stack_a), ft_printf("sort 3\n"); 
		
	 else if (len > 3 && len <= 6)
	{
		ft_put_index(stack_a);
		ft_sort_fourtosix(stack_a, stack_b), ft_printf("sort 4-6\n");
	}

	 else if (len >= 7)
	{
		ft_put_index(stack_a);
		ft_ksort1(stack_a, stack_b, len);
		ft_ksort2(stack_a, stack_b, len);
	} 
}
