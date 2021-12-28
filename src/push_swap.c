/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:57:09 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/28 17:58:54 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

static int	safety_check_string(char *str)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(str);
	if (str[i] == '\0')
		return (-1);
	while (str[i])
	{
		if ((str[i] == '-' && i != 0) || (str[i] == '-' && size <= 1))
			return (-1);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0 && str[i] != '-')
			return (-1);
		i++;
	}
	return (0);
}

static int	safety_check_tab(char **tab)
{
	size_t	i;

	i = 1;
	while (tab[i])
	{
		if (safety_check_string(tab[i]) == -1)
			return (-1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_dlist	stack_a;
	t_dlist	stack_b;
	size_t	i;

	ft_dlist_init(&stack_a, free);
	ft_dlist_init(&stack_b, free);
	i = 0;
	if (safety_check_tab(av) == -1 || ac <= 1)
		return (write(STDERR_FILENO, "Error\n", 7));
	while (ac > 1)
	{
		alloc_number(&stack_a, av[i]);
		i++;
		ac--;
	}
	ft_dlist_destroy(&stack_a);
	ft_dlist_destroy(&stack_b);
	return (0);
}
