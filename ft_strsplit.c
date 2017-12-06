/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 18:54:13 by jthompki          #+#    #+#             */
/*   Updated: 2017/12/01 20:02:10 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				ft_countwords(char const *s, char c)
{
	int		i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			return (i);
		while (*s != c)
			s++;
		i++;
	}
	return (i);
}

static size_t			ft_fillword(char **ptr, char const *s, char c, int i)
{
	size_t		shift;
	size_t		wlen;

	shift = 0;
	wlen = 0;
	while (*s == c)
	{
		s++;
		shift++;
	}
	while (s[wlen] && s[wlen] != c)
		wlen++;
	if (wlen > 0)
	{
		ptr[i] = ft_strnew(wlen);
		ptr[i] = ft_strncpy(ptr[i], s, wlen);
	}
	return (shift + wlen);
}

char					**ft_strsplit(char const *s, char c)
{
	int			i;
	int			wcount;
	char		**ptr;
	size_t		shift;

	if (s == NULL || c == '\0')
		return (NULL);
	i = 0;
	shift = 0;
	wcount = ft_countwords(s, c);
	if ((ptr = (char **)malloc(sizeof(char *) * ++wcount)) == NULL)
		return (NULL);
	while (*s && i < wcount - 1)
	{
		shift = ft_fillword(ptr, s, c, i);
		s += shift;
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
