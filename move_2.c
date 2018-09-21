/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 13:42:55 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/06 13:32:40 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		move_2(t_game *stored)
{
	int		i;
	int		j;
	int		c;
	int		move;

	c = 0;
	i = 0;
	move = 0;
	while (i < stored->size_y)
	{
		j = 0;
		while (j < stored->size_x)
		{
			if (try_move(stored, i, j) == 1 && c < stored->heat_map[i][j])
			{
				stored->move_x = j;
				stored->move_y = i;
				c = stored->heat_map[i][j];
				move++;
			}
			j++;
		}
		i++;
	}
	return ((move > 0) ? 1 : 0);
}
