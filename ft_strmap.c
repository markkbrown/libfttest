/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 09:19:12 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/30 09:46:17 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		i;
	char		*c;

	i = -1;
	if (f == NULL || s == NULL)
		return (NULL);
	if ((c = ft_strnew(ft_strlen(s))) == NULL)
		return (NULL);
	while (s[++i])
		c[i] = (*f)(s[i]);
	c[i] = '\0';
	return (c);
}
