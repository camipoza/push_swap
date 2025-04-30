/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:47:25 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/03 19:17:02 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int letra)
{
	if (letra >= 'A' && letra <= 'Z')
		return (letra + 32);
	else
		return (letra);
}

/*int	main(void)
{
    int letra;
    letra = 'C';
    printf("%c", ft_tolower(letra));
    return(0);
}*/