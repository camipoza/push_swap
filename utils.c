/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:59:34 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/04/29 17:52:23 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_oops()
{
	ft_printf("Error\n");
    exit(EXIT_SUCCESS);
}
int	ft_checklong(long n)
{
	if (n < -2147483648 || n > 2147483647)
		return (0);
	else
		return(1);
}
void	ft_loop_list(t_list *stack)
{
	t_list *p_lst;

	p_lst = stack;
	while(p_lst->next != NULL)
	{
		p_lst = p_lst->next;
		printf("%d\n", p_lst->content);
	}
}