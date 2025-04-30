/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:15:24 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/11 18:00:07 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = (char *)malloc (len1 + len2 + 1);
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, len1 + len2 + 1);
	ft_strlcat(s3, s2, len1 + len2 + 1);
	return (s3);
}

/*int	main() 
{
    char *s1 = "hola ";
    char *s2 = "caracola";
    
    char *func = ft_strjoin(s1, s2);
    
    if (func != NULL) 
    {
        printf("%s\n", func); 
        free(func);
    } 
    else 
        printf("error al reservar memoria\n");
    
    return 0;
}*/