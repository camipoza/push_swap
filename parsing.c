/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:12:47 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/02 13:34:36 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checknum(char *str)
{
	printf("str %s\n", str);
	while (*str)
	{
		if (*str == '-' || *str == '+')
			str++;
		if (!str)
			return (0);
		printf("A: %c\n", *str);
		while (ft_isdigit(*str))
			str++;
		if (!ft_isdigit(*str) && (*str) != '\0')
			return (0);
	}
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
			ft_printf("kk\n");
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

t_list	*ft_putinstack(int num, t_list *a)
{
	t_list	*node;

	node = ft_lstnew(num);
	ft_lstadd_back(&a, node);
	return (a);
}

int	ft_check_dup(t_list *stack_a)
{
	t_list	*current;
	t_list	*comp;

	current = stack_a;
	while (current != NULL)
	{
		comp = current->next;
		printf("Current %d\n", current->content);
		while (comp != NULL)
		{
			printf("comp %d\n", comp->content);
			if (current->content == comp->content)
				ft_error_oops ();
			comp = comp->next;
		}
		current = current->next;
	}
	return (1);
}
