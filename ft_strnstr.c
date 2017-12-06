/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:39:23 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/29 15:19:41 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && (i + j) < len)
	{
		if (big[i + j] == little[j])
		{
			if (little[++j] == '\0')
				return ((char *)&big[i]);
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (0);
}
