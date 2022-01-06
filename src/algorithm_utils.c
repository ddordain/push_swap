/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:35:19 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/06 17:35:53 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_ra(t_dlist *list, int n)
{
	while (n > 0)
	{
		ra(list);
		n--;
	}
}

void	do_rra(t_dlist *list, int n)
{
	while (n > 0)
	{
		rra(list);
		n--;
	}
}
