/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:48:54 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/04 13:17:55 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "push_swap/algorithm.h"
# include "push_swap/operator.h"

int		safety_check_tab(char **tab);
int	    select_algorithm(t_dlist *list_a, t_dlist *list_b);
int		size_2(t_dlist *list_a);
int		size_3(t_dlist *list_a);
int	    size_4(t_dlist *list_a, t_dlist *list_b);
int	    get_nbr(t_elem *element);

#endif