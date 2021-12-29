/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   security.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:34:13 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/29 21:36:05 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	safety_check_tab(char **tab)
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
