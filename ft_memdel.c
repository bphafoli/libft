/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:49:43 by bphafoli          #+#    #+#             */
/*   Updated: 2019/06/11 09:49:52 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    ft_memdel(void **ap)
{
        if (ap && *ap)
        {
                free(*ap);
                *ap = NULL;
        }
}
