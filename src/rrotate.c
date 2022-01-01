/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 00:01:59 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/30 13:26:15 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap/operator.h"

static void	rev_rotate(t_dlist *list)
{
	if (ft_dlist_size(list) <= 1)
		return ;
	ft_dlist_ins_prev(list, ft_dlist_head(list), ft_dlist_data(list->tail));
	ft_dlist_remove(list, ft_dlist_tail(list), &(list->tail->data));
}

void	rra(t_dlist *list)
{
	rev_rotate(list);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_dlist *list)
{
	rev_rotate(list);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_dlist *list_a, t_dlist *list_b)
{
	rev_rotate(list_a);
	rev_rotate(list_b);
	ft_putstr_fd("rrr\n", 1);
}
