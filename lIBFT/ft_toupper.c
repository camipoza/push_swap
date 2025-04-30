/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:37:44 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/03 19:11:27 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int letra)
{
	if (letra >= 'a' && letra <= 'z')
		return (letra - 32);
	else
		return (letra);
}

/*int	main(void)
{
    int letra;
    letra = 'c';
    printf("%c", ft_toupper(letra));
    return(0);
}*/