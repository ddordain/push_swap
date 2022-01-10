/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_improved.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 00:44:06 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/07 17:14:17 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	top_on_list_b(t_dlist *list_a, t_dlist *list_b)
{
	int	r;
	int rr;

	r = 0;
	rr = 0;
	while (ft_dlist_size(list_b))
	{
		r = index_from_head(list_b, ft_dlist_size(list_b) - 1);
		rr = index_from_tail(list_b, ft_dlist_size(list_b) - 1);
		if (r <= rr)
			do_rb(list_b, r);
		if (r > rr)
			do_rrb(list_b, rr);
		pa (list_a, list_b, list_b->head);
	}
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
		if (chunk_from_head(list_a, chunk) > chunk_from_tail(list_a, chunk))
			do_rra(list_a, chunk_from_tail(list_a, chunk));
		pb(list_b, list_a, list_a->head);
	}
	top_on_list_b(list_a, list_b);
}
