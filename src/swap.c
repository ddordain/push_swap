/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:13:29 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/28 17:57:39 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap/operator.h"

static void	swap(t_dlist *list)
{
	void	*tmp;

	tmp = NULL;
	if (ft_dlist_size(list) <= 1)
		return ;
	tmp = list->head->data;
	list->head->data = list->head->next->data;
	list->head->next->data = tmp;
}

void	sa(t_dlist *list)
{
	swap(list);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_dlist *list)
{
	swap(list);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_dlist *list_a, t_dlist *list_b)
{
	swap(list_a);
	swap(list_b);
	ft_putstr_fd("ss\n", 1);
}
