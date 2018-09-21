/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:28:46 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/01 10:47:06 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*cdst;
	unsigned char	*csrc;

	index = 0;
	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	if (n == 0)
		return (NULL);
	while (index < n)
	{
		cdst[index] = csrc[index];
		if (csrc[index] == (unsigned char)c)
			return (cdst + index + 1);
		index++;
	}
	return (NULL);
}
