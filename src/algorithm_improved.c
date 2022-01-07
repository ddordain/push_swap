/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_improved.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 00:44:06 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/07 02:13:36 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	adjusted_b(t_dlist *list_a, t_dlist *list_b)
{
	int		index_a;
	t_elem	*element;
	int		position;

	index_a = get_index(list_a->head);
	element = list_b->head;
	position = 0;
	while (element != NULL)
	{
		if (index_a > get_index(element))
			break ;
		position++;
		element = element->next;
	}
	if (position / ft_dlist_size(list_b))
}

void	algorithm_improved(t_dlist *list_a, t_dlist *list_b)
{
	int	chunk;

	chunk = 0;
	while (ft_dlist_size(list_a))
	{
		if (chunk_from_head(list_a, chunk) == -1)
			chunk++;
		if (chunk_from_head(list_a, chunk) <= chunk_from_tail(list_a, chunk))
			do_ra(list_a, chunk_from_head(list_a, chunk));
		else
			do_rra(list_a, chunk_from_tail(list_a, chunk));
		
		pb(list_b, list_a, list_a->head);
	}
}