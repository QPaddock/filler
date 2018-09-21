/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_heat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 14:01:01 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/06 14:23:25 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		make_map_down(t_game *stored, int count, int x)
{
	int		i;
	int		y;

	y = stored->opp_y;
	i = count;
	while (y != stored->size_y)
	{
		if (stored->map[y][x] == stored->opp)
			i = MAX;
		if (stored->heat_map[y][x] < i)
		{
			i--;
			stored->heat_map[y][x] = i;
		}
		y++;
	}
	return (1);
}

int		make_map_up(t_game *stored, int count, int x)
{
	int		i;
	int		y;

	y = stored->opp_y;
	i = count;
	while (y != -1)
	{
		if (stored->map[y][x] == stored->opp)
			i = MAX;
		if (stored->heat_map[y][x] < i)
		{
			i--;
			stored->heat_map[y][x] = i;
		}
		y--;
	}
	make_map_down(stored, count, x);
	return (1);
}

int		heat_left(t_game *stored)
{
	int		x;
	int		y;
	int		count;

	x = stored->opp_x;
	y = stored->opp_y;
	count = MAX;
	while (x >= 0)
	{
		if (stored->map[y][x] == stored->opp)
			count = MAX;
		if (stored->heat_map[y][x] < count)
		{
			stored->heat_map[y][x] = count;
			make_map_up(stored, count, x);
			count--;
		}
		x--;
	}
	return (1);
}

int		heat_right(t_game *stored)
{
	int		x;
	int		y;
	int		count;

	y = stored->opp_y;
	x = stored->opp_x - 1;
	count = MAX;
	while (x != stored->size_x)
	{
		if (stored->map[y][x] == stored->opp)
			count = MAX;
		if (stored->heat_map[y][x] < count)
		{
			stored->heat_map[y][x] = count;
			make_map_up(stored, count, x);
			count--;
		}
		x++;
	}
	return (1);
}

int		make_heat(t_game *stored)
{
	heat_left(stored);
	heat_right(stored);
	return (1);
}
