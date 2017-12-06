/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:47:12 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/30 11:08:11 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t		shift;

	shift = ft_strlen(s1);
	while (*s2)
	{
		s1[shift] = *s2;
		shift++;
		s2++;
	}
	s1[shift] = '\0';
	return (s1);
}
