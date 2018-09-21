/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:52:35 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/01 10:34:52 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*cs1;
	unsigned char	*cs2;

	index = 0;
	cs1 = (unsigned char*)s1;
	cs2 = (unsigned char*)s2;
	while (index < n)
	{
		if (cs1[index] != cs2[index])
			return (cs1[index] - cs2[index]);
		index++;
	}
	return (0);
}
