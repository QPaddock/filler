/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 14:04:29 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/01 12:26:21 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		inde;

	inde = 0;
	while (s1[inde] == s2[inde] && s1[inde] && s2[inde])
		inde++;
	return ((unsigned char)s1[inde] - (unsigned char)s2[inde]);
}
