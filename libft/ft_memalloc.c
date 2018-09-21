/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:20:15 by qpaddock          #+#    #+#             */
/*   Updated: 2018/05/25 10:56:41 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (size <= 0)
		return (NULL);
	if (!(mem = (void*)malloc(size)))
		return (0);
	mem = (void*)malloc(size);
	mem = ft_memset(mem, 0, size);
	return (mem);
}
