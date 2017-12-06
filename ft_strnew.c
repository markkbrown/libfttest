/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 08:26:40 by jthompki          #+#    #+#             */
/*   Updated: 2017/12/01 13:11:59 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*c;

	if (size == 0)
	{
		c = (char *)malloc(sizeof(unsigned char) * 0);
		return (c);
	}
	if (((c = (char *)malloc(sizeof(unsigned char) * ++size)) == NULL))
		return (NULL);
	while (size)
	{
		c[size] = '\0';
		size--;
	}
	c[size] = '\0';
	return (c);
}
