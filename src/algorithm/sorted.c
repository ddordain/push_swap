/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:47:21 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/28 17:58:33 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_dlist *list)
{
	t_elem	*element;
	int		size;
	int		*number;
	int		*number_next;

	element = NULL;
	number = NULL;
	number_next = NULL;
	if (list->size < 2)
		return (-1);
	element = list->head;
	while (size > 1)
	{
		number = element->data;
		number_next = element->next->data;
		if (*number > *number_next)
			return (0);
		size--;
	}
	return (1);
}

int	sorted_final(t_dlist *list_a, t_dlist *list_b)
{
	if (list_a->size == 0)
		return (-1);
	if (sorted(list_a) == 1 && ft_dlist_size(list_b) == 0)
		return (1);
	else
		return (0);
}
