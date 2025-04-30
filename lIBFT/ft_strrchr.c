/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:46:35 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/05 18:31:11 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c) //locate the last 'c' in str
{
	char	*str;
	char	cc;
	char	*i;

	str = (char *)s;
	cc = (char)c;
	i = 0;
	while (*str != '\0')
	{
		if (*str == cc)
			i = str;
		str++;
	}
	if (cc == '\0')
		return (str);
	return (i);
}

/*int	main (void)
{
const char *s = "paralelepipedo";
char c = 'e';
char *resultado = ft_strrchr(s, c);

    if(resultado != NULL)
        printf("la última 'e' está en %s\n :)", s);
    else
        printf("la última 'e' no se encuentra en %s\n :(", s);
    
return(0);
}*/