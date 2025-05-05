/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:45:24 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/03 18:39:06 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size) //concat str
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = 0;
	len_src = 0;
	i = 0;
	while (dest [len_dest] != '\0' && len_dest < size)
		len_dest++;
	while (src [len_src] != '\0')
		len_src++;
	if (size <= len_dest)
		return (size + len_src);
	while (src[i] != '\0' && (len_dest + i) < (size - 1))
	{
		dest [len_dest + i] = src [i];
		i++;
	}
	dest [len_dest + i] = '\0';
	return (len_dest + len_src);
}

/*int	main(void)
{
    char dest [23] = "i am your father! ";
    const char src [] = "nooo";
    ft_strlcat(dest, src, 30);
    printf("strings concatenados: %s\n", dest);
    return(0);
}*/
