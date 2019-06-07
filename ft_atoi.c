/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:08:56 by bphafoli          #+#    #+#             */
/*   Updated: 2019/06/07 10:04:29 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int		ft_atoi(const char *str)
{
	int		i;
	int		negative;
	int		final;

	i = 0;
	final = 0;
	negative = 0;
	while (isspace(str[i]) || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || (str[i] == '+' && isdgit(str[i])))
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
int main () {
   int val;
   char str[20];
   
   strcpy(str, "98993489");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}
