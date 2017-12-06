/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:11:39 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/30 13:30:52 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	char	*ch;

	ch = (char *)s;
	if (s == NULL)
		return ;
	while (*ch)
	{
		ft_putchar_fd(*ch, fd);
		ch++;
	}
}
