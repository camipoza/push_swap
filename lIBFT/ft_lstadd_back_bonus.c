/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:00:02 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/04/25 12:18:11 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
}
/*int	main()
{
	t_list *nodo1 = ft_lstnew("1");
	t_list *nodo2 = ft_lstnew("2");
	t_list *nodo3 = ft_lstnew("3");
	t_list *nodo4 = ft_lstnew("4");
	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = NULL;
	ft_lstadd_back(&nodo1, nodo4);
	printf("%s\n", (char *)nodo3->next->content);
}*/
