/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 09:01:18 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/15 11:38:07 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "libft/libft.h"
# include "struct.h"
# define MAX 100

int		store_map(t_game *stored);
int		store_token(t_game *stored, char *tok);
int		store_heat_map(t_game *stored);
int		make_heat(t_game *stored);
void	position(t_game *stored);
int		move_2(t_game *stored);
int		try_move(t_game *stored, int i, int j);
void	make_move(t_game *stored);

#endif
