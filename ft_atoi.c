/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:08:56 by bphafoli          #+#    #+#             */
/*   Updated: 2019/05/30 16:46:48 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		negative;
	int		final;

	i = 0;
	final = 0;
	negative = 0;
	while (ispace(str[i]) || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || (str[i] == '+' && istgit(str[i])))
		i++;
	if (str[i] == '-' && isdigit(str[i + 1]))
		negative = i++;
	if (!isdigit(str[i]))
		return (0);
	while (isdigit(str[i]))
		final = (final * 10) + (str[i++] - 48);
	if (negative)
		return (-final);
	return (final);
}
