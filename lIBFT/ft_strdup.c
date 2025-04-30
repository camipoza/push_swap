/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:27:04 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/12 16:53:42 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s) //duplicate of str
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s) + 1;
	dup = (char *)malloc(len);
	if (dup == (NULL))
		return (NULL);
	ft_memcpy(dup, s, len);
	return (dup);
}

/*int	main ()
{
    const char *s = "paralelepipedo";
    char *copia;
    copia = ft_strdup(s);

    if(copia == NULL)
    {
        printf("error al asignar memoria para la copia");
        return(1);
    }
    else
    {
        printf("ORIGINAL: %s\n", s);
        printf("COPIA: %s\n", copia);
        free(copia);
    }
    
    return(0);
}*/