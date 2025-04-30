/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:47:41 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/04 18:33:27 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char			*str;
	unsigned char				cc;
	size_t						i;

	str = (const unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cc)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

/*int	main()
{
    char string[] = "helao";
    char *resultado;
    resultado = (char *)memchr(string, 'l', 5);

    if(resultado != NULL)
    printf("se encontró 'l' en la posición: %ld\n", resultado - string);
    else
    printf("no encontrado");

return(0);
}*/