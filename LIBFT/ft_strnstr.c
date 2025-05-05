/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:49:01 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/10 16:43:09 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	little_len = ft_strlen(little);
	ft_strlen(big);
	if (!big || !little)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	if (little_len > len)
		return (NULL);
	i = 0;
	while (big[i] && i <= len - little_len)
	{
		if (big[i] == little[0])
			if (ft_strncmp(&big[i], little, little_len) == 0)
				return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
    const char *big = "empty";
    const char *little = "coucou";
    size_t len = -1;
    char *resultado = ft_strnstr(big, little, len);

    if(resultado != NULL)
        printf("little encontrado en posición: %ld\n", resultado - big);
    else
        printf("no encontrado");
    return(0);
}*/