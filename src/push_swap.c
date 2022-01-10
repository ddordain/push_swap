/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:57:09 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/10 13:48:27 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_dlist	stack_a;
	t_dlist	stack_b;
	size_t	i;

	ft_dlist_init(&stack_a, free);
	ft_dlist_init(&stack_b, free);
	i = 1;
	if (safety_check_tab(av) == EXIT_FAILURE || ac <= 1)
		return (write(STDERR_FILENO, "Error\n", 7));
	while (ac-- > 1)
		alloc_number(&stack_a, av[i++]);
	if (check_duplicate(&stack_a) == EXIT_FAILURE)
	{
		ft_dlist_destroy(&stack_a);
		return (write(STDERR_FILENO, "Error\n", 7));
	}
	alloc_index_head(&stack_a);
	alloc_index_prev(&stack_a);
	alloc_chunk(&stack_a);
	select_algorithm(&stack_a, &stack_b);
	ft_dlist_destroy(&stack_a);
	ft_dlist_destroy(&stack_b);
	return (0);
}
