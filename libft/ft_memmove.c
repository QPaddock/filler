/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:22:44 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/01 11:23:23 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;

	cdst = (char*)dst;
	csrc = (char*)src;
	if (csrc < cdst)
	{
		cdst = cdst + len - 1;
		csrc = csrc + len - 1;
		while (len > 0)
		{
			*cdst-- = *csrc--;
			len--;
		}
	}
	else
		while (len > 0)
		{
			*cdst++ = *csrc++;
			len--;
		}
	return (dst);
}
