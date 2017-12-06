/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:23:32 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/29 12:22:21 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	chr;
	char			*ptr;
	size_t			i;

	i = 0;
	ptr = (char *)b;
	chr = (unsigned char)c;
	while (i < len)
	{
		ptr[i] = chr;
		i++;
	}
	return (b);
}
