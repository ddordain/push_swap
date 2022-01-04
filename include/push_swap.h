/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:48:54 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/04 18:29:01 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "push_swap/algorithm.h"
# include "push_swap/operator.h"

/* type structure : structure of every single number of the stack, the int and its final index place */
typedef struct s_push_swap_element
{
	int	number;
	int	index;
}		t_nb;

/* security.c : functions to prevent from wrong inputs */
int		safety_check_tab(char **tab);

/* init : function that initiate the program once data have been clean-checked */
int		select_algorithm(t_dlist *list_a, t_dlist *list_b);
int		alloc_number(t_dlist *list, char *str);
int		alloc_index_head(t_dlist *list);
int		alloc_index_prev(t_dlist *list);

/* small_algorithm.c : functions to sort a small stack */
void	size_2(t_dlist *list_a);
void	size_3(t_dlist *list_a);
int		size_4(t_dlist *list_a, t_dlist *list_b);


/* math.c : functions to access the number and the index */
int		get_nbr(t_elem *element);
int		get_index(t_elem *element);

#endif