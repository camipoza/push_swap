/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:03:20 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/02 16:37:38 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_order(t_list **stack_a)
{
    t_list  *check;
    t_list  *comp;

    check = *stack_a;
    while (check->next != NULL)
    {
        comp = check->next;
        while (comp->next != NULL)
        {
            if (check->content > comp->content)
                return(0);
        }
        check = check->next;
    }
    return(1);
}

