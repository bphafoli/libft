/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:12:40 by bphafoli          #+#    #+#             */
/*   Updated: 2019/06/11 17:03:06 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	*charset;

	if (!s || !c)
		return (NULL);
	if (!(charset = ft_strnew(2)))
		return (NULL);
	charset[0] = c;
	return (ft_strsplitchrset((char*)s, charset));
}
