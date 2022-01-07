/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 11:22:23 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/07 01:35:13 by ddordain         ###   ########.fr       */
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

int	get_chunk(t_elem *element)
{
	t_nb	*sub_elem;
	int		chunk;

	sub_elem = element->data;
	chunk = sub_elem->chunk;
	return (chunk);
}

int	ft_abs(int nb)
{
	if (nb < 0)
		nb = nb * -1;
	return (nb);
}