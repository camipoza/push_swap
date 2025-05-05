/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:05:57 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/05 19:00:09 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*box;
	unsigned char		*box2;

	box = (const unsigned char *)src;
	box2 = (unsigned char *)dest;
	if (box2 > box && box < box2 + n)
	{
		while (n > 0)
		{
			n--;
			box2[n] = box[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*int	main(void)
{
    char src1[] = "Hello, World!";
    char dest1[20];
    char src2[] = "Overlap test";
    char dest2[] = "Overlap test";

    printf("Before memmove: src1 = '%s', dest1 = '%s'\n", src1, dest1);
    ft_memmove(dest1, src1, strlen(src1) + 1);
    printf("After memmove: src1 = '%s', dest1 = '%s'\n", src1, dest1);

    printf("Before overlapping memmove: '%s'\n", dest2);
    ft_memmove(dest2 + 3, dest2, strlen(dest2) + 1);
    printf("After overlapping memmove: '%s'\n", dest2);

    return(0);
}*/
