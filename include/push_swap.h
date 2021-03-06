/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:48:54 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/10 13:48:08 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "push_swap/algorithm.h"
# include "push_swap/operator.h"

/* type structure */
typedef struct s_push_swap_element
{
	int	number;
	int	index;
	int	chunk;
}		t_nb;

/* security.c : functions to prevent from wrong inputs */
int		safety_check_tab(char **tab);
int		check_duplicate(t_dlist *list);

/* init : function that initiate the program */
int		select_algorithm(t_dlist *list_a, t_dlist *list_b);
int		alloc_number(t_dlist *list, char *str);
int		alloc_index_head(t_dlist *list);
int		alloc_index_prev(t_dlist *list);
int		alloc_chunk(t_dlist *list);

/* small_algorithm.c : functions to sort a small stack */
void	size_2(t_dlist *list_a);
void	size_3(t_dlist *list_a);
void	size_4(t_dlist *list_a, t_dlist *list_b);
void	size_5(t_dlist *list_a, t_dlist *list_b);

/* algorithm.c : main algorithm to sort the stack */
void	algorithm_1_class_in_b(t_dlist *list_a, t_dlist *list_b);
void	algorithm(t_dlist *list_a, t_dlist *list_b);

/* algorithm_utils.c : utilitaries for the algorithm */
void	do_ra(t_dlist *list, int n);
void	do_rra(t_dlist *list, int n);
void	do_rb(t_dlist *list, int n);
void	do_rrb(t_dlist *list, int n);

/* algorithm_improved.c */
void	algorithm_improved(t_dlist *list_a, t_dlist *list_b);
void	top_on_list_b(t_dlist *list_a, t_dlist *list_b);

/* algorithm_imp_utils.c */
int		chunk_from_head(t_dlist *list, int chunk);
int		chunk_from_tail(t_dlist *list, int chunk);
int		index_from_head(t_dlist *list, int index);
int		index_from_tail(t_dlist *list, int index);

/* math.c : functions to access the number and the index */
int		get_nbr(t_elem *element);
int		get_index(t_elem *element);
int		get_chunk(t_elem *element);
int		get_max_chunk(t_dlist *list);

#endif