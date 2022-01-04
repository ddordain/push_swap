/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 11:22:23 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/04 17:16:23 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_nbr(t_elem *element)
{
	t_nb	*sub_elem;
	int		number;

	sub_elem = element->data;
	number = sub_elem->number;
	return (number);
}

int	get_index(t_elem *element)
{
	t_nb	*sub_elem;
	int		index;

	sub_elem = element->data;
	index = sub_elem->index;
	return (index);
}
