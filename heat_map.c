/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heat_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 10:32:15 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/06 14:21:48 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		allocate_mem(t_game *stored)
{
	int		i;

	i = 0;
	while (i < stored->size_y)
	{
		stored->heat_map[i] = (int*)malloc(stored->size_x * sizeof(int));
		i++;
	}
	return (1);
}

int		store_heat_map(t_game *stored)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	stored->heat_map = (int**)malloc(stored->size_y * sizeof(stored->heat_map));
	allocate_mem(stored);
	while (i < stored->size_y)
	{
		j = 0;
		while (j < stored->size_x)
		{
			stored->heat_map[i][j] = 0;
			j++;
		}
		i++;
	}
	make_heat(stored);
	return (1);
}
