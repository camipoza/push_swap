/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:26:51 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/13 18:18:07 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
*** 5. ALGORITMO DE ORDENACION ***
- check si están ordeandos
-ordenar 2, 3, 4
- k sort
 */

int main(int argc, char **argv)
{ 
	int nums;
	t_list *stack_a;
	t_list *stack_b;

	nums = 0;
    stack_a = NULL;
    stack_b = NULL;
    if (argc < 2)
        return (1);
    stack_a = ft_parsing(argv);    
    ft_check_dup(stack_a);
	//ft_print_list(stack_a);
    if(!ft_check_order(&stack_a))
		  ft_sort(&stack_a, &stack_b);
    //ft_print_list(stack_a);
    /*ft_printf("------\n");
    ft_print_list(stack_b); */
}
