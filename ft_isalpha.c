/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:42:21 by bphafoli          #+#    #+#             */
/*   Updated: 2019/05/27 15:55:25 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_isalpha(int c)
{
	if((c <= 'A' || c >= 'Z')
			&& (c <= 'a' || c >= 'z'))
		return (0);
	return(1);
}
