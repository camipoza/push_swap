/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:35:00 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/11 18:25:06 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num * size > 2147483647)
		return (NULL);
	ptr = malloc(num * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, num * size);
	return (ptr);
}

/*int	main()
{
    int *arr = (int *)ft_calloc(2, 2147483647);
    int i = 0;
    if(arr != NULL)
    {
        while(i < 5)
        {
            i++;
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    free(arr);
    }
    else
    printf("error al asignar memoria\n");
    return(0);
}*/