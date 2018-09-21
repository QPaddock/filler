/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:52:15 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/06 13:30:21 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	position(t_game *stored)
{
	int		i;
	int		j;

	i = stored->size_y - 1;
	stored->opp = (stored->user == 'O') ? 'X' : 'O';
	while (i >= 0)
	{
		j = 0;
		while (j < stored->size_x)
		{
			if (stored->user == stored->map[i][j])
			{
				stored->user_x = j;
				stored->user_y = i;
			}
			else if (stored->opp == stored->map[i][j])
			{
				stored->opp_x = j;
				stored->opp_y = i;
			}
			j++;
		}
		i--;
	}
}
