/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:06:15 by qpaddock          #+#    #+#             */
/*   Updated: 2018/05/24 10:45:04 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	index;
	char	*s;

	s = (char*)b;
	index = 0;
	while (index != len)
	{
		s[index] = c;
		index++;
	}
	return (s);
}
