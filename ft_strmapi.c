/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 09:48:28 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/30 09:53:22 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*c;

	i = -1;
	if (f == NULL || s == NULL)
		return (NULL);
	if ((c = ft_strnew(ft_strlen(s))) == NULL)
		return (NULL);
	while (s[++i])
		c[i] = (*f)(i, s[i]);
	c[i] = '\0';
	return (c);
}
