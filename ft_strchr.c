/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:41:39 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/28 18:42:45 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	char		*p;
	char		ch;

	i = 0;
	ch = c;
	p = NULL;
	while (s[i])
	{
		if (s[i] == ch)
		{
			p = (char *)&s[i];
			return (p);
		}
		i++;
	}
	if (s[i] == ch)
	{
		p = (char *)&s[i];
		return (p);
	}
	return (p);
}
