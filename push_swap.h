/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:27:54 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/04/29 12:49:40 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#	define PUSH_SWAP_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "./LIBFT/libft.h"
#include "./pRINTF/ft_printf.h"

int	main(int argc, char **argv);
t_list	*ft_parsing(char **arg);
t_list *ft_putinstack(int num, t_list *a);
int	ft_checklong(long n);
int	ft_checknum(char *str);
void	ft_error_oops();

#endif