/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:26:51 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/04/29 17:52:05 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* *** 1. COMPROBACIONES INICIALES ***
- ARGC > 2
- crear stacks

*** 2. PARSEO ***

*** 3. METER EN NODOS ***

*** 4. MOVS ***

*** 5. ALGORITMO DE ORDENACION ***
- k sort
 */

int main(int argc, char **argv)
{ 
    int i;
	int nums;
	t_list *stack_a;
	t_list *stack_b;

	i = 0;
	nums = 0;
    stack_a = NULL;
    if (argc < 2)
        return (1);
    stack_a = ft_parsing(argv);
    ft_loop_list(stack_a);
    
    ft_check_dup(stack_a);
}
