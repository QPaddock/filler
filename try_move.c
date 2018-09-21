/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 09:31:11 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/06 13:29:16 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		check_move(t_game *stored, int i, int j)
{
	int		x;
	int		y;
	int		move;

	move = 0;
	y = 0;
	while (y < stored->tsize_y)
	{
		x = 0;
		while (x < stored->tsize_x)
		{
			if ((stored->map[i + y][j + x] == stored->user
					|| stored->map[i + y][j + x] == stored->user + 32)
					&& stored->token[y][x] == '*')
				move++;
			if (stored->token[y][x] == '*'
					&& (stored->map[i + y][j + x] == stored->opp
					|| stored->map[i + y][j + x] == stored->opp + 32))
				return (0);
			x++;
		}
		y++;
	}
	return ((move == 1) ? 1 : 0);
}

int		try_move(t_game *stored, int i, int j)
{
	if (i + stored->tsize_y > stored->size_y)
		return (0);
	else if (j + stored->tsize_x > stored->size_x)
		return (0);
	else
		return (check_move(stored, i, j));
}
