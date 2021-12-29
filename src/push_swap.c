/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:57:09 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/29 22:50:48 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	alloc_number(t_dlist *list, char *str)
{
	int	*number;

	number = malloc(sizeof(int));
	if (number == NULL)
		return (-1);
	*number = ft_atoi(str);
	if (ft_dlist_ins_next(list, ft_dlist_tail(list), number) == -1)
		return (-1);
	return (0);
}

int	main(int ac, char **av)
{
	t_dlist	stack_a;
	t_dlist	stack_b;
	size_t	i;

	ft_dlist_init(&stack_a, free);
	ft_dlist_init(&stack_b, free);
	i = 1;
	if (safety_check_tab(av) == -1 || ac <= 1)
		return (write(STDERR_FILENO, "Error\n", 7));
	while (ac > 1)
	{
		alloc_number(&stack_a, av[i]);
		i++;
		ac--;
	}
	int size;
	int *number;
	t_elem *ptr;

	size = (&stack_a)->size;
	ptr = (&stack_a)->head;
	while (size >= 1)
	{
		number = ptr->data;
		printf("%d\n", *number);
		ptr = ptr->next;
		size--;
	}
	select_algorithm(&stack_a);
	size = (&stack_a)->size;
	ptr = (&stack_a)->head;
	while (size >= 1)
	{
		number = ptr->data;
		printf("%d\n", *number);
		ptr = ptr->next;
		size--;
	}
	ft_dlist_destroy(&stack_a);
	ft_dlist_destroy(&stack_b);
	return (0);
}