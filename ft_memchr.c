/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 16:49:47 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/27 18:29:35 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	unsigned char			ch;
	const unsigned char		*src;

	i = 0;
	ch = (unsigned char)c;
	src = (const unsigned char *)s;
	while (i < n)
	{
		if (((unsigned char *)src)[i] == ch)
		{
			return ((void *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
