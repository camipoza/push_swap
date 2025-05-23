/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:59:49 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/11 17:59:17 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int	ft_isinset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*ft_strncpy(char *dest, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	while (i < dsize && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < dsize)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_isinset(s1[start], set))
		start++;
	while (end > start && ft_isinset((s1[end - 1]), set))
		end--;
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	if (result == NULL)
		return (NULL);
	ft_strncpy(result, s1 + start, end - start);
	result[end - start] = '\0';
	return (result);
}

/*int main()
{
    char const *s1 = "???caracola_-_";
    char const *set = "?-_";
    char *func;

    func = ft_strtrim(s1, set);
    if(func != NULL)
    {
        printf("string recortada: %s\n", func);
        free(func);
    }
    else
    printf("error al reservar memoria");

    return(0);
}*/
