/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 14:29:39 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/28 14:50:49 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*c;
	size_t		i;
	size_t		j;

	j = 0;
	i = ft_strlen(s1);
	if ((c = (char *)malloc(sizeof(char) * ++i)) == NULL)
		return (NULL);
	while (i > 0)
	{
		c[j] = s1[j];
		j++;
		i--;
	}
	c[j] = '\0';
	return (c);
}
