/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algorithm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:44:56 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/06 14:19:00 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	size_2(t_dlist *list)
{
	if (get_index(list->head) == 1)
		sa(list);
}

void	size_3(t_dlist *list)
{
	int	first;
	int	second;
	int	third;

	first = get_nbr(list->head);
	second = get_nbr(list->head->next);
	third = get_nbr(list->tail);
	if (first > second && first < third && second < third)
		sa(list);
	if (first > second && first > third && second > third)
	{
		sa(list);
		rra(list);
	}
	if (first > second && first > third && second < third)
		ra(list);
	if (first < second && first < third && second > third)
	{
		sa(list);
		ra(list);
	}
	if (first < second && first > third && second > third)
		rra(list);
}

void	size_4(t_dlist *list_a, t_dlist *list_b)
{	
	while (get_index(list_a->head) != 0)
		ra(list_a);
	pb(list_b, list_a, list_a->head);
	size_3(list_a);
	pa(list_a, list_b, list_b->head);
}

void	size_5(t_dlist *list_a, t_dlist *list_b)
{
	while (get_index(list_a->head) != 0 && get_index(list_a->head) != 1)
		ra(list_a);
	pb(list_b, list_a, list_a->head);
	while (get_index(list_a->head) != 0 && get_index(list_a->head) != 1)
		ra(list_a);
	pb(list_b, list_a, list_a->head);
	size_3(list_a);
	if (get_index(list_b->head) < get_index(list_b->head->next))
		sb(list_b);
	pa(list_a, list_b, list_b->head);
	pa(list_a, list_b, list_b->head);
}
