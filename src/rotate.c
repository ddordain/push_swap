/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 21:26:07 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/30 13:26:58 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap/operator.h"

static void	rotate(t_dlist *list)
{
	if (ft_dlist_size(list) <= 1)
		return ;
	ft_dlist_ins_next(list, ft_dlist_tail(list), ft_dlist_data(list->head));
	ft_dlist_remove(list, ft_dlist_head(list), &(list->head->data));
}

void	ra(t_dlist *list)
{
	rotate(list);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_dlist *list)
{
	rotate(list);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_dlist *list_a, t_dlist *list_b)
{
	rotate(list_a);
	rotate(list_b);
	ft_putstr_fd("rr\n", 1);
}
