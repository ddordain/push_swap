/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:48:54 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/29 22:19:12 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "push_swap/algorithm.h"
# include "push_swap/operator.h"

int		safety_check_tab(char **tab);
int		select_algorithm(t_dlist *list);
int		size_2(t_dlist *list);
int		size_3(t_dlist *list);

#endif