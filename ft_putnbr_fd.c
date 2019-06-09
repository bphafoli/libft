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

void	ft_putnbr_fd(int n, int fd)
{
	if (n <0)
	{
		ft_putchar_fd('-',fd);
		ft_putnbr_fd(-n, fd);
	}
	if (n < 10)
		ft_putchar_fd(n + 48, fd);
	else
	{
		ft_putnbr_fd(n/10, fd);
		ft_putnbr_fd(n%10, fd);
	}
}
