/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:49:11 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/05 19:01:14 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n) //copy memory area
{
	const unsigned char		*box;
	unsigned char			*box2;
	size_t					i;

	i = 0;
	box = (const unsigned char *)src;
	box2 = (unsigned char *) dest;
	if (box2 == NULL && box == NULL)
		return (NULL);
	while (i < n)
	{
		box2[i] = box[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest [20];
	char	src [];

	src[] = "hola mundo";
	ft_memcpy(dest, src, 4);
	printf("destino: %s", dest);
	return (0);
}*/
