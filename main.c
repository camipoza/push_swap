/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:26:51 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/04/24 20:09:19 by cpoza-ra         ###   ########.fr       */
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
 /*    int i;
	int nums;
	t_list **stack_a;
	t_list **stack_b;

	i = 0;
	nums = NULL;
    stack_a = NULL;
    if (argc < 2)
        return (1);
    while (argv[i] != NULL)
    {
        stack_a = ft_parsing(argv[i]);
        
		i++;
        
    } */
    int n  = 5;
	t_list *a;
    a = ft_putinstack(n, a);
	printf("%d\n", (int *)a->next->content);
    
    
}
    t_list *ft_putinstack(int n, t_list *a)
    {
    	t_list	*node;
        
	    node = ft_lstnew (n);
	    ft_lstadd_back (a, node);
        return (a);
    }