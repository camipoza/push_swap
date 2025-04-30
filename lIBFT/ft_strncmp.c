/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:14:09 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/04 18:19:08 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n) //comp 2 str til n char
{
	size_t	i;

	i = 0;
	while (i < n && *s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

/*int	main(void)
{
    const char *s1 = "caracola";
    const char *s2 = "caraculo";
    size_t n = 4;

    ft_strncmp(s1, s2, n);
    if(ft_strncmp(s1, s2, n) < 0)
    	printf("s1 es menor que s2");
	if(ft_strncmp(s1, s2, n) == 0)
    	printf("s1 es igual que s2");
	if(ft_strncmp(s1, s2, n) > 0)
    	printf("s1 es mayor que s2");
return(0);
}*/