/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:03:33 by bphafoli          #+#    #+#             */
/*   Updated: 2019/06/06 13:03:40 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnew(size_t size)
{
        size_t  i;
        char    *string;

        if (!(string = ft_memalloc(size + 1)))
                return (NULL);
        i = 0;
        while (i < size)
                string[i++] = '\0';
        return (string);
}
