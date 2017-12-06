/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:28:19 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/30 13:34:34 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	*c;

	c = (char *)s;
	if (s == NULL)
	{
		ft_putchar_fd('\n', fd);
		return ;
	}
	ft_putstr_fd(c, fd);
	ft_putchar_fd('\n', fd);
}
