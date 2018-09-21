/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 14:08:50 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/06 13:30:52 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include <stdio.h>

int		store_map(t_game *stored)
{
	char		*str;
	int			i;

	i = 0;
	get_next_line(0, &str);
	stored->map = (char**)malloc(stored->size_y * sizeof(char*));
	while (i <= stored->size_y)
	{
		get_next_line(0, &str);
		if (ft_isdigit(str[0]))
			stored->map[i] = ft_strdup(str + 4);
		else
			store_token(stored, str);
		i++;
	}
	position(stored);
	store_heat_map(stored);
	position(stored);
	return (0);
}
