/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 18:45:31 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/28 18:45:41 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		*p;
	char		ch;

	i = 0;
	ch = (char)c;
	p = NULL;
	while (s[i])
	{
		if (s[i] == ch)
			p = (char *)&s[i];
		i++;
	}
	if (s[i] == ch)
	{
		p = (char *)&s[i];
		return (p);
	}
	return (p);
}
