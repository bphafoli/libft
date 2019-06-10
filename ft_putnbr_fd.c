/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:18:21 by bphafoli          #+#    #+#             */
/*   Updated: 2019/06/06 13:18:25 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int nb, int fd)
{
        unsigned int    nbr;

        if (nb < 0)
        {
                ft_putchar_fd('-', fd);
                nbr = (unsigned int)(nb * -1);
        }
        else
                nbr = (unsigned int)nb;
        if (nbr >= 10)
                ft_putnbr_fd(nbr / 10, fd);
        ft_putchar_fd((char)(nbr % 10 + 48), fd);
}
