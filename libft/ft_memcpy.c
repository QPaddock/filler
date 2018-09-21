/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:23:18 by qpaddock          #+#    #+#             */
/*   Updated: 2018/05/22 11:01:10 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;
	char	*dest;
	char	*sour;

	dest = (char*)dst;
	sour = (char*)src;
	index = 0;
	while (index != n)
	{
		dest[index] = sour[index];
		index++;
	}
	return (dest);
}
