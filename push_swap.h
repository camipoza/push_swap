/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:27:54 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/04/22 16:47:44 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stdio.h>
typedef struct s_list
{
    int			content;
	int			index;
    struct s_list	*next;
} t_list;
int     main(int argc, char **argv);
int	ft_parsing(char *arg);
#endif