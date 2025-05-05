/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:22:43 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/04/29 12:25:42 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c) // checks for digits 
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf ("%d", ft_isdigit('0'));
	return (0);
}*/
