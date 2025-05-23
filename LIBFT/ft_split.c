/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:31:26 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/06 19:40:35 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_extract_word(char const *s, char c, int *i)
{
	int	start;
	int	end;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	end = *i;
	return (ft_substr(s, start, end - start));
}

static void	ft_free_split(char **str, size_t words)
{
	while (words-- > 0)
	{
		free(str[words]);
		str[words] = NULL;
	}
	free(str);
	str = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		z;

	i = 0;
	z = 0;
	if (!s)
		return (NULL);
	str = ft_calloc(sizeof(char *), (ft_count_words(s, c) + 1));
	while (s[i] && str != NULL)
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			str[z] = ft_extract_word(s, c, &i);
			if (!str[z])
				return (ft_free_split(str, ft_count_words(s, c)), NULL);
			z++;
		}
		else
			i++;
	}
	if (str != NULL)
		str[z] = NULL;
	return (str);
}
/*
int main()
{
    char **result = ft_split("hola,cara,cola", ',');
    if (!result)
    {
        printf("Error al asignar memoria\n");
        return 1;
    }
    for (int i = 0; result[i]; i++)
    {
        printf("%s\n", result[i]);
        free(result[i]);  // Se libera cada palabra
    }
    free(result);  // Se libera el array de punteros
    return 0;
}*/