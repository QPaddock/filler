/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 11:15:31 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/06 12:56:17 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include <stdio.h>

void	make_move(t_game *stored)
{
	if (stored->wro == 1)
	{
		stored->go = 1;
	}
	ft_putnbr(stored->move_y);
	ft_putchar(' ');
	ft_putnbr(stored->move_x);
	ft_putchar('\n');
}
