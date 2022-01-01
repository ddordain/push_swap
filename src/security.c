/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   security.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:34:13 by ddordain          #+#    #+#             */
/*   Updated: 2022/01/01 20:55:48 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	safety_intmax(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
	{
		++i;
	}
	if (ft_strlen(str + i) > 2)
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}

static int	safety_duplicate(char **tab)
{
	size_t	i;
	size_t	j;
	size_t	n_i;
	size_t	n_j;

	i = 1;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			n_i = ft_strlen(tab[i]);
			n_j = ft_strlen(tab[j]);
			if (n_i != n_j)
			{
				j++;
				break ;
			}
			if (ft_strncmp(tab[i], tab[j], n_i) == 0)
				return (EXIT_FAILURE);
			j++;
		}
		i++;
	}
	return (EXIT_SUCCESS);
}

static int	safety_check_string(char *str)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(str);
	if (str[i] == '\0')
		return (EXIT_FAILURE);
	while (str[i])
	{
		if ((str[i] == '-' && i != 0) || (str[i] == '-' && size <= 1))
			return (EXIT_FAILURE);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0 && str[i] != '-')
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}

int	safety_check_tab(char **tab)
{
	size_t	i;

	i = 1;
	while (tab[i])
	{
		if (safety_check_string(tab[i]) == EXIT_FAILURE)
			return (EXIT_FAILURE);
		i++;
	}
	if (safety_duplicate(tab) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	i = 1;
	while (tab[i])
	{
		if ((ft_atoi(tab[i]) == 0 || ft_atoi(tab[i]) == -1)
			&& safety_intmax(tab[i]) == EXIT_FAILURE)
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
