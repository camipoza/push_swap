/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:17:10 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/04/29 11:50:02 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(int content) //crea un nodo
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*int main()
{
	char *content = "hola";
	t_list *nodo = ft_lstnew(content);
	
	if(nodo){
		printf("nuevo nodo creado.\n");
		printf("contenido: %s\n", content);
	}
	else
		printf("error al crear el nodo");
	return(0);
}*/