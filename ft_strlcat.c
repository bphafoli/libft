/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:33:38 by bphafoli          #+#    #+#             */
/*   Updated: 2019/06/05 17:39:04 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	m;

	s = 0;
	m = 0;
	while (dst[s] && s < dstsize)
		s++;
	while ((src[m]) && ((s + m + 1) < dstsize))
	{
		dst[s + m] = src[m];
		m++;
	}
	if (s != dstsize)
	{
		dst[s + m] = '\0';
		return (s + ft_strlen(src));
	}
}
