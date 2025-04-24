/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:12:47 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/04/24 19:23:42 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <libft.h>

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
	
t_list	**ft_parsing(char **arg)
{	
	int	n;
	t_list **a;

	n = 0;
	while (**arg)
    {
		if (!ft_checknum(arg))
			ft_error_oops();
		n = ft_atoi(arg);
		if (!n)
			ft_error_oops();
		if (!ft_checklong(n))
			ft_error_oops();
		a = ft_putinstack(n, a);
		arg++;
	}
    //check duplicados
	return (a);	
}
t_list **ft_putinstack(int n, t_list **a)
{
	t_list	*nodo;
	t_list	**list;
	
	list = &a;
	nodo = ft_lstnew(n);
	ft_lstadd_back(list, nodo);
}