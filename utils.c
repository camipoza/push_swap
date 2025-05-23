/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:59:34 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/23 19:25:07 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_oops(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_SUCCESS);
}

int	ft_check_dup(t_list *stack_a)
{
	t_list	*current;
	t_list	*comp;

	current = stack_a;
	while (current != NULL)
	{
		comp = current->next;
		while (comp != NULL)
		{
			if (current->content == comp->content)
			{
				ft_freenode(&stack_a);
				ft_error_oops();
			}
			comp = comp->next;
		}
		current = current->next;
	}
	return (1);
}

void	ft_print_list(t_list *stack)
{
	t_list	*aux;

	aux = stack;
	while (aux)
	{
		printf("content: %d\n", aux->content);
		printf("index: %d\n", aux->index);
		aux = aux->next;
	}
}

void	ft_put_index(t_list **stack_a)
{
	t_list	*check;
	t_list	*comp;
	int		i;

	check = *stack_a;
	while (check != NULL)
	{
		i = 0;
		comp = *stack_a;
		while (comp != NULL)
		{
			if (check->content > comp->content)
				i++;
			comp = comp->next;
		}
		check->index = i;
		check = check->next;
	}
}

t_list	*ft_almostlastnode(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next->next != NULL)
		lst = lst->next;
	return (lst);
}
