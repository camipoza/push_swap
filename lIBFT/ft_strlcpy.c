/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:33:12 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/04 17:58:43 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	slen;

	slen = 0;
	if (size > 0)
	{
		while (src[slen] != '\0' && slen < (size - 1))
		{
			dest[slen] = src[slen];
			slen++;
		}
		dest[slen] = '\0';
	}
	return (ft_strlen(src));
}

/*int	main(void)
{
    char dest [20];
    char src [] = "esta es mi source";
    ft_strlcpy(dest, src, 16);
    printf("destino = %zu", ft_strlcpy(dest, src, 16));
    return(0);
}*/
