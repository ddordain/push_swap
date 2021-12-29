/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 12:53:33 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/28 17:45:23 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap/operator.h"

void	pa(t_dlist *list_a, t_dlist *list_b, t_elem *element)
{
	if (element == NULL || ft_dlist_size(list_b) == 0)
		return ;
	ft_dlist_ins_prev(list_a, ft_dlist_head(list_a), ft_dlist_data(element));
	ft_dlist_remove(list_b, ft_dlist_head(list_b), &(element->data));
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_dlist *list_b, t_dlist *list_a, t_elem *element)
{
	if (element == NULL || ft_dlist_size(list_a) == 0)
		return ;
	ft_dlist_ins_prev(list_b, ft_dlist_head(list_b), ft_dlist_data(element));
	ft_dlist_remove(list_a, ft_dlist_head(list_a), &(element->data));
	ft_putstr_fd("pb\n", 1);
}
