/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:12:14 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/04 16:45:34 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

/*int main()
{
    int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) // error al abrir el archivo
        return 1;
    ft_putstr_fd("hola caracola!", fd); // escribe la cadena en el archivo
    close(fd); // cierra el archivo
    return 0;
}*/