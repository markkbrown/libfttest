/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 22:10:54 by jthompki          #+#    #+#             */
/*   Updated: 2017/12/01 22:18:51 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*current;
	t_list	*next_link;

	if (lst == NULL)
		return ;
	next_link = lst->next;
	(*f)(lst);
	while (next_link)
	{
		current = next_link;
		next_link = current->next;
		(*f)(current);
	}
}
