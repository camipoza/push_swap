/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:40:36 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/04/29 11:57:33 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(int))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*int main() 
{
	char *content = "hola";
    t_list *nodo1 = ft_lstnew(content);
    printf("original: %s\n", (char *)nodo1->content);

    ft_lstiter(nodo1, ft_toupper);

    printf("nodo modificado: %s\n", (char *)nodo1->content);
    return 0;
}*/