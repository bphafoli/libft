/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:10:52 by bphafoli          #+#    #+#             */
/*   Updated: 2019/06/06 13:10:57 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *result;
	size_t i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if ((result = (char *)malloc(sizeof (char)*(len + 1))) == NULL)
		return (NULL);

	i = 0;
	while (i < len && s[start] != '\0')
	{
		result[i] == s[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
