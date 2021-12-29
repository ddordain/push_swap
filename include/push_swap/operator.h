/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:01:57 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/29 23:04:09 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOR_H
# define OPERATOR_H

# include "push_swap.h"
# include "../libft/include/libft.h"

/* pa : push top of stack B on top of stack A */
/* pb : push top of stack A on top of stack B */
/* ra : rotate the head of stack A to the tail of stack A */
/* rb : rotate the head of stack B to the tail of stack B */
/* rr : ra & rb in the same time */
/* rra : rotate the tail of stack A to the head of stack A */
/* rrb : rotate the tail of stack B to the head of stack B */
/* rrr : rra & rrb in the same time */

void	pa(t_dlist *list_a, t_dlist *list_b, t_elem *element);
void	pb(t_dlist *list_b, t_dlist *list_a, t_elem *element);
void	sa(t_dlist *list);
void	sb(t_dlist *list);
void	ss(t_dlist *list_a, t_dlist *list_b);
void	ra(t_dlist *list);
void	rb(t_dlist *list);
void	rr(t_dlist *list_a, t_dlist *list_b);
void	rra(t_dlist *list);
void	rrb(t_dlist *list);
void	rrr(t_dlist *list_a, t_dlist *list_b);

#endif