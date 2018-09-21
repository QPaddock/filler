/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:12:05 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/01 10:29:51 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lendst;

	lendst = (size_t)ft_strlen(dst);
	i = 0;
	j = 0;
	if (dstsize <= lendst)
		return (dstsize + (size_t)ft_strlen(src));
	while (dst[i] != '\0')
		i++;
	while (i < (dstsize - 1) && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return ((size_t)ft_strlen(src) + lendst);
}
