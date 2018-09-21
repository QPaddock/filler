/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 09:20:53 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/15 11:37:33 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		main(void)
{
	char	*line;
	t_game	stored;

	get_next_line(0, &line);
	stored.user = (ft_atoi(line + 10) == 1) ? 'O' : 'X';
	while (42)
	{
		get_next_line(0, &line);
		stored.size_y = ft_atoi(&line[8]);
		stored.size_x = ft_atoi(&line[11]);
		store_map(&stored);
		if (move_2(&stored) == 0)
			stored.wro = 1;
		make_move(&stored);
		if (stored.go == 1)
			break ;
	}
	return (0);
}
