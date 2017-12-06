/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:18:10 by jthompki          #+#    #+#             */
/*   Updated: 2017/11/29 15:36:00 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int						i;
	int						is_neg;
	unsigned long long		n;

	i = 0;
	n = 0;
	is_neg = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		is_neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] == '0')
		i++;
	while (ft_isdigit(str[i]))
		n = n * 10 + (str[i++] - '0');
	if (n > 9223372036854775807)
		return ((is_neg == 1) ? 0 : -1);
	return ((int)n * ((is_neg == 1) ? -1 : 1));
}
