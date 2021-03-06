/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 16:00:53 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/06 14:17:44 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITHM_H
# define ALGORITHM_H

# include "push_swap.h"
# include "../libft/include/libft.h"

int	sorted(t_dlist *list);
int	sorted_final(t_dlist *list_a, t_dlist *list_b);

#endif