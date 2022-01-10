/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 16:06:54 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/10 12:48:30 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	select_algorithm(t_dlist *list_a, t_dlist *list_b)
{
	if (ft_dlist_size(list_a) == 1)
		return (EXIT_SUCCESS);
	if (ft_dlist_size(list_a) == 2)
		size_2(list_a);
	if (ft_dlist_size(list_a) == 3)
		size_3(list_a);
	if (ft_dlist_size(list_a) == 4)
		size_4(list_a, list_b);
	if (ft_dlist_size(list_a) == 5)
		size_5(list_a, list_b);
	if (ft_dlist_size(list_a) > 5 && ft_dlist_size(list_a) <= 10)
		algorithm(list_a, list_b);
	if (ft_dlist_size(list_a) > 10)
		algorithm_improved(list_a, list_b);
	return (EXIT_FAILURE);
}

int	alloc_index_head(t_dlist *list)
{
	t_elem	*element;
	t_elem	*elem_iterator;
	t_nb	*sub_elem;

	element = list->head;
	while(element != NULL)
	{
		elem_iterator = element->next;
		while(elem_iterator != NULL)
		{
			sub_elem = element->data;
			if (get_nbr(element) > get_nbr(elem_iterator))
				sub_elem->index++;
			elem_iterator = elem_iterator->next;
		}
		element = element->next;
	}
	return (EXIT_SUCCESS);
}

int	alloc_index_prev(t_dlist *list)
{
	t_elem	*element;
	t_elem	*elem_iterator;
	t_nb	*sub_elem;

	element = list->tail;
	while(element != NULL)
	{
		elem_iterator = element->prev;
		while(elem_iterator != NULL)
		{
			sub_elem = element->data;
			if (get_nbr(element) > get_nbr(elem_iterator))
				sub_elem->index++;
			elem_iterator = elem_iterator->prev;
		}
		element = element->prev;
	}
	return (EXIT_SUCCESS);
}


int	alloc_number(t_dlist *list, char *str)
{
	t_nb	*sub_elem;

	sub_elem = malloc(sizeof(t_nb));
	if (sub_elem == NULL)
		return (EXIT_FAILURE);
	sub_elem->number = ft_atoi(str);
	sub_elem->index = 0;
	sub_elem->chunk = 0;
	if (ft_dlist_ins_next(list, ft_dlist_tail(list), sub_elem) == -1)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	alloc_chunk(t_dlist *list)
{
	t_elem	*element;
	t_nb	*sub_elem;
	int		chunk_divisor;

	chunk_divisor = ft_dlist_size(list) / 10;
	element = list->head;
	while (element != NULL)
	{
		sub_elem = element->data;
		sub_elem->chunk = get_index(element) / chunk_divisor;
		element = element->next;
	}
	return (EXIT_SUCCESS);
}