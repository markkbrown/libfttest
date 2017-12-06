/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 21:48:18 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/29 15:14:36 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t		i;

	if (little[0] == '\0')
		return ((char *)big);
	while (*big)
	{
		i = 0;
		while (big[i] == little[i])
		{
			if (little[++i] == '\0')
				return ((char *)big);
		}
		big++;
	}
	return (0);
}
