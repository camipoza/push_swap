/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:12:47 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/04/18 17:14:55 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
*** 2. PARSEO ***
- comprobar que si hay signos (+/-) no se repiten 
- son digitos, son números enteros NO decimales (isdigit con mezcla de atoi

post- atoi
- no pasan del int max   2147483647/ -2147483648
- nums no repetidos


void	ft_parsing(char *arg)
{
	if (!ft_checksign(arg))
		error;
	if (!ft_isdigit(arg))
		error;
	if (!ft_atoi(arg))
		error;
	}