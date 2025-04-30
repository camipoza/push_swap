/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:06:08 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/04 16:43:33 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main()
{
    int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
    if(fd == -1)
        return 1;
      ft_putchar_fd('A', fd);

    close(fd);
    return 0;
}*/
