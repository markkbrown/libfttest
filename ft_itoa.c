/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 07:51:44 by jthompki          #+#    #+#             */
/*   Updated: 2017/12/01 16:21:38 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_buffer(int n)
{
	size_t		i;
	char		*c;

	i = 1;
	if (n < 0)
		i++;
	while ((n / 10) != 0)
	{
		i++;
		n /= 10;
	}
	if ((c = ft_strnew(i)) == NULL)
		return (NULL);
	return (c);
}

char			*ft_itoa(int n)
{
	int		i;
	int		is_neg;
	char	*c;

	i = 0;
	is_neg = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if ((c = ft_buffer(n)) == NULL)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		is_neg++;
	}
	while (n)
	{
		c[i++] = ((n % 10) > 0 ? (n % 10) + '0' : -1 * (n % 10) + '0');
		n /= 10;
	}
	if (is_neg)
		c[i] = '-';
	return (ft_strrev(c));
}
