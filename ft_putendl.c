/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:21:34 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/30 13:48:00 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	if (s == NULL)
	{
		ft_putchar_fd('\n', 1);
		return ;
	}
	ft_putstr_fd(s, 1);
	ft_putchar_fd('\n', 1);
}
