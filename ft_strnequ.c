/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:09:23 by bphafoli          #+#    #+#             */
/*   Updated: 2019/06/06 13:09:26 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
        if (!s1 || !s2)
                return (0);
        if (ft_strncmp(s1, s2, n) == 0)
                return (1);
        return (0);
}
