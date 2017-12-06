/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:54:40 by jthompki          #+#    #+#             */
/*   Updated: 2017/12/01 16:06:30 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		shift;

	i = 0;
	shift = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[shift] = s2[i];
		shift++;
		i++;
	}
	s1[shift] = '\0';
	return (s1);
}
