/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:49:36 by slahrach          #+#    #+#             */
/*   Updated: 2022/05/12 23:11:43 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!(*lst))
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	last = ft_lstlast(*lst);
	while (new->next)
	{
		last->next = new;
		new = new->next;
	}
}
