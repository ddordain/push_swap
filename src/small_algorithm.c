/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algorithm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:44:56 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/04 13:16:52 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_2(t_dlist *list)
{
	int	*first;
	int	*second;

	first = list->head->data;
	second = list->head->next->data;
	if (*second < *first)
		sa(list);
	return (EXIT_SUCCESS);
}

int	size_3(t_dlist *list)
{
	int	*first;
	int	*second;
	int	*third;

	first = list->head->data;
	second = list->head->next->data;
	third = list->tail->data;
	if (*first > *second && *first < *third && *second < *third)
		sa(list);
	if (*first > *second && *first > *third && *second > *third)
	{
		sa(list);
		rra(list);
	}
	if (*first > *second && *first > *third && *second < *third)
		ra(list);
	if (*first < *second && *first < *third && *second > *third)
	{
		sa(list);
		ra(list);
	}
	if (*first < *second && *first > *third && *second > *third)
		rra(list);
	return (EXIT_SUCCESS);
}

int	size_4(t_dlist *list_a, t_dlist *list_b)
{
	pb(list_b, list_a, list_a->head);
	size_3(list_a);
	if (get_nbr(list_b->head) < get_nbr(list_a->head))
	{
		pa(list_a, list_b, list_b->head);
	}
	else if (get_nbr(list_b->head) > get_nbr(list_a->tail))
	{
		pa(list_a, list_b, list_b->head);
		ra(list_a);
	}
	else if (get_nbr(list_b->head) < get_nbr(list_a->head->next))
	{
		pa(list_a, list_b, list_b->head);
		sa(list_a);
	}
	else
	{
		pb(list_b, list_a, list_a->head);
		sb(list_b);
		pa(list_a, list_b, list_b->head);
		sa(list_a);
		pa(list_a, list_b, list_b->head);
	}
	return (EXIT_SUCCESS);
}
