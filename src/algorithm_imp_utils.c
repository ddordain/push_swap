/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_imp_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 01:16:06 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/07 01:18:24 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chunk_from_head(t_dlist *list, int chunk)
{
	t_elem	*element;
	int		from_head;

	element = list->head;
	from_head = 0;
	while (element != NULL)
	{
		if (get_chunk(element) == chunk)
			return (from_head);
		from_head++;
		element = element->next;
	}
	return (-1);
}

int	chunk_from_tail(t_dlist *list, int chunk)
{
	t_elem	*element;
	int		from_tail;

	element = list->tail;
	from_tail = 1;
	while (element != NULL)
	{
		if (get_chunk(element) == chunk)
			return (from_tail);
		from_tail++;
		element = element->prev;
	}
	return (-1);
}