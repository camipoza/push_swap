/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:52:05 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/05 18:38:32 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c) //locate char in str
{
	char	*str;
	char	cc;

	str = (char *)s;
	cc = (char)c;
	while (*str != '\0')
	{
		if (*str == cc)
			return (str);
		str++;
	}
	if (cc == '\0')
		return (str);
	return (NULL);
}

/*int	main (void)
{
    const char *s = "paralelepipedo";
    char c = 'e';
    char *resultado = ft_strchr(s, c);
    if(resultado != NULL)
        printf("el char 'e' está en %s\n :)", resultado);
    else
        printf("el char 'e' no se encuentra en %s\n :(", resultado);
    
    return(0);
}*/