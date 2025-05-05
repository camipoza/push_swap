/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:38:10 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/12 14:05:25 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*int	main()
{
	t_list *lst = ft_lstnew("nodo1");
	lst->next = ft_lstnew("nodo2");
	lst->next->next = ft_lstnew("nodo3");
	printf("el número de nodos es: %d\n", ft_lstsize(lst));
	return(0); 
}*/
