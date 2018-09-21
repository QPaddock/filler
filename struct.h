/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 09:15:48 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/06 14:25:40 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct	s_game
{
	char	user;
	char	opp;
	char	**map;
	char	**token;
	int		**heat_map;
	int		size_x;
	int		size_y;
	int		tsize_x;
	int		tsize_y;
	int		user_x;
	int		user_y;
	int		opp_x;
	int		opp_y;
	int		move_x;
	int		move_y;
	int		trim_x;
	int		trim_y;
	int		rel_pos;
	int		move;
	int		wro;
	int		go;
}				t_game;

#endif
