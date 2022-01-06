/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:57:09 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/06 17:10:46 by ddordain         ###   ########.fr       */
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
	while (ac > 1)
	{
		alloc_number(&stack_a, av[i]);
		i++;
		ac--;
	}
	alloc_index_head(&stack_a);
	alloc_index_prev(&stack_a);

//	int 	size;
//	t_elem 	*ptr;
//	t_nb	*sub;

//	size = (&stack_a)->size;
//	ptr = (&stack_a)->head;
//	while (size >= 1)
//	{
//		sub = ptr->data;
//		printf("valeur : %d, index : %d\n", sub->number, sub->index);
//		ptr = ptr->next;
//		size--;
//	}
//	if (sorted_final(&stack_a, &stack_b) == EXIT_SUCCESS)
//		return (0);
	select_algorithm(&stack_a, &stack_b);
//	size = (&stack_a)->size;
//	ptr = (&stack_a)->head;
//	while (size >= 1)
//	{
//		sub = ptr->data;
//		printf("valeur : %d, index : %d\n", sub->number, sub->index);
//		ptr = ptr->next;
//		size--;
//	}
	ft_dlist_destroy(&stack_a);
	ft_dlist_destroy(&stack_b);
	return (0);
}
