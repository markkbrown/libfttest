/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 14:18:05 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/28 15:44:48 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;
	size_t		length;
	size_t		diff;

	i = 0;
	diff = 0;
	length = ft_strlen(src);
	if (length < len)
		diff = len - length;
	while (i < (len - diff))
	{
		dst[i] = src[i];
		i++;
	}
	while (diff > 0)
	{
		dst[i] = '\0';
		i++;
		diff--;
	}
	return (dst);
}
