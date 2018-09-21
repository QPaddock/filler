/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:05:19 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/01 12:40:15 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	inde;

	inde = 0;
	if (n == 0)
		return (0);
	while (inde != n - 1 && s1[inde] && s2[inde] && s1[inde] == s2[inde])
		inde++;
	if (s1[inde] == '\200' && s2[inde] == '\0')
		return (1);
	return ((unsigned char)s1[inde] - (unsigned char)s2[inde]);
}
