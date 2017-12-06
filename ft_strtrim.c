/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:41:53 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/30 18:46:04 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isempty(char const *s)
{
	while (*s)
	{
		if (!ft_isspace(*s))
			return (0);
		s++;
	}
	return (1);
}

static int		ft_trimlen(char const *s)
{
	int		i;
	int		j;
	int		counter;

	i = 0;
	j = ft_strlen(s) - 1;
	counter = -1;
	while (ft_isspace(s[++counter]))
		i++;
	while (ft_isspace(s[j]))
		j--;
	return ((j - i) + 1);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*c;

	if (s == NULL)
		return (NULL);
	if (ft_isempty(s))
		return (ft_strdup(""));
	i = 0;
	len = ft_trimlen(s);
	if ((c = ft_strnew(len)) == NULL)
		return (NULL);
	while (ft_isspace(*s))
		s++;
	while (i < len)
	{
		c[i] = *(s + i);
		i++;
	}
	c[i] = '\0';
	return (c);
}
