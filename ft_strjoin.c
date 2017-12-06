/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 10:48:39 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/30 11:07:28 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		catl;
	char		*c;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (ft_strdup(""));
	catl = ft_strlen(s1) + ft_strlen(s2);
	if (((c = ft_strnew(catl)) == NULL))
		return (NULL);
	c = ft_strcpy(c, s1);
	return (ft_strcat(c, s2));
}
