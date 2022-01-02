/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 16:06:54 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/03 00:00:16 by ddordain         ###   ########.fr       */
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
		size_5(list_a, list_b);
	return (EXIT_FAILURE);
}
