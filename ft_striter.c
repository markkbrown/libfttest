/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 08:46:55 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/30 09:10:06 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t		len;

	if (f == NULL || s == NULL)
		return ;
	len = ft_strlen(s) - 1;
	while (len)
	{
		(*f)(&s[len]);
		len--;
	}
	(*f)(&s[len]);
}
