/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_token.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:18:37 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/06 13:30:00 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include <stdio.h>

int		store_token(t_game *stored, char *tok)
{
	int		i;
	int		j;

	i = 6;
	j = 0;
	stored->tsize_y = ft_atoi(&tok[i]);
	stored->token = (char**)malloc(stored->tsize_y * sizeof(char*));
	while (ft_isdigit(tok[i]))
		i++;
	i++;
	stored->tsize_x = ft_atoi(&tok[i]);
	while (j < stored->tsize_y)
	{
		get_next_line(0, &tok);
		stored->token[j] = ft_strdup(tok);
		j++;
	}
	return (0);
}
