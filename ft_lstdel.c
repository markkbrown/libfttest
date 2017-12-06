/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:03:09 by jthompki          #+#    #+#             */
/*   Updated: 2017/12/01 22:29:12 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*next_link;

	if (alst == NULL || *alst == NULL)
		return ;
	next_link = (*alst)->next;
	(*del)((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
	while (next_link)
	{
		current = next_link;
		next_link = current->next;
		(*del)(current->content, current->content_size);
		free(current);
		current = NULL;
	}
}
