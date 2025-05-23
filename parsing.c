/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:12:47 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/23 17:58:56 by cpoza-ra         ###   ########.fr       */
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

int	ft_checklong(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == '0')
			str++;
		if (*str != '0')
		{
			count++;
			str++;
		}
	}
	if (count > 10)
		return (0);
	return (1);
}

t_list	*ft_parsing(char **arg)
{
	t_list	*a;
	long	n;

	n = 0;
	a = NULL;
	arg++;
	while (*arg)
	{
		if (!ft_checknum(*arg))
			ft_error_oops();
		if (!ft_checklong(*arg))
			ft_error_oops();
		n = ft_atol(*arg);
		a = ft_putinstack(n, a);
		arg++;
	}
	return (a);
}
