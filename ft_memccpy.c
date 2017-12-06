/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 16:34:49 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/28 13:42:21 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char		*s;
	unsigned char			*d;
	unsigned char			ch;
	size_t					i;

	i = 0;
	ch = (unsigned char)c;
	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == ch)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
