/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:57:17 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/01 10:35:13 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	char	ch;
	char	*str;

	index = 0;
	ch = (char)c;
	str = (char*)s;
	while (index != n)
	{
		if (str[index] == ch)
			return ((char*)&str[index]);
		index++;
	}
	return (NULL);
}
