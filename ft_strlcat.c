/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:17:28 by jthompki          #+#    #+#             */
/*   Updated: 2017/12/01 16:07:41 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		ft_dst_length(char *dst, size_t size)
{
	size_t		i;

	i = 0;
	while (dst[i] && i < (size - 1))
		i++;
	return (i);
}

size_t				ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dl;
	size_t		sl;
	size_t		shift;

	i = 0;
	sl = ft_strlen(src);
	dl = ft_dst_length(dst, size);
	shift = dl;
	if (size == 0 || dl > (size - 1))
		return (sl + ((size == 0) ? 0 : dl));
	if (dl < size - 1)
	{
		while (i < size - dl - 1)
		{
			dst[shift] = src[i];
			shift++;
			i++;
		}
		dst[shift] = '\0';
		return (sl + dl);
	}
	else
		return (sl + size);
}
