/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 08:41:41 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/30 08:45:05 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t		len;

	if (s == NULL)
		return ;
	len = ft_strlen(s);
	while (len)
	{
		s[len] = '\0';
		len--;
	}
	s[len] = '\0';
}