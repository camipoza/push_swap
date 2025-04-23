/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:12:47 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/04/23 18:58:58 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* *** 2. PARSEO ***
- comprobar que si hay signos (+/-) no se repiten 
- son digitos, son números enteros NO decimales (isdigit con mezcla de atoi

post- atoi
- no pasan del int max   2147483647/ -2147483648
- nums no repetidos */

int	ft_checknum(char *str) 
{
	while (*str)
	{
		if (str == '-' || str == '+')
			str++;
		if(!str)
			return (0);
		while (ft_isdigit(str))
			str++;
		if(!ft_isdigit(str))
			return(0);
	}
	return (1);
}

int	ft_checklong(int n)
{
	if (n < -2147483648 || n > 2147483647)
		return (0);
	else
		return(1);
}
	
t_list	ft_parsing(char **arg, t_list **a)
{	
	int	n;
	t_list *nodo;

	n = 0;
	while (**arg)
    {
		if (!ft_checknum(arg))
			error;
		n = ft_atoi(arg);
		if (!n)
			error;
		if (!ft_checklong(n))
			error;
		nodo = ft_lstnew(n);
		a = ft_lstadd_back(a, nodo);
		arg++;
	}
    //check duplicados
	return (n);	
}