/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:33:09 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/19 18:36:37 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_min_index(t_list *stack)
{
	t_list	*current;
	int		min_index;

	current = stack;
	min_index = current->index;
	while (current->next != NULL)
	{
		if(current->index < min_index)
			min_index = current->index;
		current = current->next;
	}
	return(min_index);
}

int	ft_get_target_index(t_list *stack, int target_index)
{
	t_list	*current;

	current = stack;
	while (current->next != NULL)
		while(current->index != target_index)
			current = current->next;
	return(current->index);
}
int	ft_count_rot(t_list *stack, int index)
{
	int		counter;
	t_list*	aux;

	counter = 0;
	aux = stack;
	while(aux->index != index)
	{
		aux = aux->next;
		counter++;
	}
	return(counter);
}
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
				//ft_printf("desordenaos\n");
           		return(0);
			}
			comp = comp->next;
    	}
   		 check = check->next;
	}
	//ft_printf("ordenaos\n");
	return(1);
}
int		ft_sqrt(int num)
{
	int		i;

	if(num < 4)
		return(1);
	i = 2;
	while (i * i < num)
		i++;
	if(i * i > num)
		if((i * i - num) < (num - (i - 1) * (i - 1)))
			return (i);
	return (i - 1);
}
