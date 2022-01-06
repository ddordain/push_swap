/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:51:29 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/06 15:37:55 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	do_ra(t_dlist *list, int n)
{
	while (n > 0)
	{
		ra(list);
		n--;
	}
}

static void	do_rra(t_dlist *list, int n)
{
	while (n > 0)
	{
		rra(list);
		n--;
	}
}

void	algorithm_1(t_dlist *list_a, t_dlist *list_b)
{
	int		index_pos;
	int 	move_to_index_pos_from_head;
	int		initial_size;
	t_elem	*element;
	
	index_pos = 0;
	initial_size = ft_dlist_size(list_a);
	while (index_pos < initial_size)
	{
		move_to_index_pos_from_head = 0;
		element = list_a->head;
		while (index_pos != get_index(element) && element != NULL)
		{
			move_to_index_pos_from_head++;
			element = element->next;
		}
		if (move_to_index_pos_from_head < initial_size / 2 + 1)
			do_ra(list_a, move_to_index_pos_from_head);
		else
			do_rra(list_a, initial_size - move_to_index_pos_from_head);
		pb(list_b, list_a, list_a->head);
		index_pos++;
	}
	while(ft_dlist_size(list_b))
		pa(list_a, list_b, list_b->head);
}
