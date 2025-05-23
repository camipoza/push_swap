/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:27:54 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/23 17:58:34 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "./LIBFT/libft.h"
# include "./LIBFT/ft_printf.h"

t_list	*ft_parsing(char **arg);
t_list	*ft_putinstack(int num, t_list *a);
int		ft_checklong(char *str);
int		ft_checknum(char *str);
void	ft_error_oops(void);
int		ft_check_dup(t_list *stack_a);
void	ft_print_list(t_list *stack);
void	ft_sa(t_list **stack_a);
void	ft_sb(t_list **stack_b);
void	ft_ss(t_list **stack_a, t_list **stack_b);
void	ft_pa(t_list **stack_b, t_list **stack_a);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
t_list	*ft_almostlastnode(t_list *lst);
int		ft_check_order(t_list **stack_a);
void	ft_sort(t_list **stack_a, t_list **stack_b);
void	ft_sort_three(t_list **stack_a);
void	ft_sort_fourtosix(t_list **stack_a, t_list **stack_b);
void	ft_put_index(t_list **stack);
int		ft_get_min_index(t_list *stack);
int		ft_count_rot(t_list *stack, int index);
int		ft_sqrt(int num);
void	ft_ksort1(t_list **stack_a, t_list **stack_b, int len_a);
void	ft_ksort2(t_list **stack_a, t_list **stack_b, int len_b);
int		ft_get_target_index(t_list *stack, int target_index);

#endif