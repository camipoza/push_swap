/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:07:18 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/04 19:26:33 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*m1;
	const unsigned char		*m2;
	size_t					i;

	m1 = (const unsigned char *)s1;
	m2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && *m1 == *m2)
	{
		m1++;
		m2++;
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char) *m1 - (unsigned char) *m2);
}

/*int	main (void)
{
    const char *s1 = "caracola";
    const char *s2 = "caraculo";
    size_t n = 5;

    ft_memcmp(s1, s2, n);
    if(ft_memcmp(s1, s2, n) < 0)
    	printf("s1 es menor que s2");
	if(ft_memcmp(s1, s2, n) == 0)
    	printf("s1 es igual que s2");
	if(ft_memcmp(s1, s2, n) > 0)
    	printf("s1 es mayor que s2");
return(0);
}*/