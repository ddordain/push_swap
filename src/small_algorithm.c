/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algorithm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:44:56 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/29 22:19:16 by ddordain         ###   ########.fr       */
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
