/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:44:57 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/12 17:27:04 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*int	main()
{
	t_list *nodo1 = ft_lstnew("1");
	t_list *nodo2 = ft_lstnew("2");
	t_list *nodo3 = ft_lstnew("3");

	nodo1->next = nodo2;
	nodo2->next = nodo3;
	t_list *ultimonodo = ft_lstlast(nodo1);

	if(ultimonodo != NULL)
		printf("nodo añadido %s\n", (char *)ultimonodo->content);
	else
		printf("paula es tontis");
	return(0);
}*/
