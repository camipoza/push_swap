/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:12:47 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/05 17:13:50 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checknum(char *str)
{
	while (*str)
	{
		if (*str == '-' || *str == '+')
			str++;
		if (!str)
			return (0);
		while (ft_isdigit(*str))
			str++;
		if (!ft_isdigit(*str) && (*str) != '\0')
			return (0);
	}
	return (1);
}

t_list	*ft_putinstack(int num, t_list *a)
{
	t_list	*node;

	node = ft_lstnew(num);
	ft_lstadd_back(&a, node);
	return (a);
}
int	ft_checklong(long n)
{
	if (n < -2147483648 || n > 2147483647)
		return (0);
	else
		return (1);
}

t_list	*ft_parsing(char **arg)
{
	long	n;
	t_list	*a;

	n = 0;
	a = NULL;
	arg++;
	while (*arg)
	{
		if (!ft_checknum(*arg))
			ft_error_oops();
		n = ft_atol(*arg);
		if (!n)
			ft_error_oops();
		if (!ft_checklong(n))
			ft_error_oops();
		a = ft_putinstack(n, a);
		arg++;
	}
	return (a);
}
