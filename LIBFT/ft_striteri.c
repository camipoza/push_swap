/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:10:37 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/04 17:12:02 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	to_upper(unsigned int index, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - ('a' - 'A');
}

int main() 
{
    char str[] = "hola caracola";
    printf("original: %s\n", str);

    ft_striteri(str, to_upper);

    printf("modificado: %s\n", str);
    return 0;
}*/