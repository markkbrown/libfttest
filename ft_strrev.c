/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:02:55 by jthompki          #+#    #+#             */
/*   Updated: 2017/12/01 13:10:42 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *c)
{
	char	*c1;
	char	*c2;
	char	tmp;

	if (c == NULL || *c == '\0')
		return (c);
	c1 = c;
	c2 = c + (ft_strlen(c) - 1);
	while (c2 > c1)
	{
		tmp = *c2;
		*c2 = *c1;
		*c1 = tmp;
		c1++;
		c2--;
	}
	return (c);
}
