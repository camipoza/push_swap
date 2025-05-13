/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:33:09 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/13 14:38:57 by cpoza-ra         ###   ########.fr       */
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