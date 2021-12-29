/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 16:06:54 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/29 22:21:35 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	select_algorithm(t_dlist *list)
{
	if (ft_dlist_size(list) == 1)
		return (EXIT_SUCCESS);
	if (ft_dlist_size(list) == 2)
		size_2(list);
	if (ft_dlist_size(list) == 3)
		size_3(list);
	return (EXIT_FAILURE);
}
