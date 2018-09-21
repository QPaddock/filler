/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:36:02 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/14 12:27:54 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	pl;

	i = 0;
	pl = 0;
	while (pl + i < len && haystack[pl + i] != '\0')
	{
		while (haystack[pl + i] == needle[i] && pl + i < len
				&& needle[i] != '\0')
		{
			i++;
		}
		if (needle[i] == '\0')
			return ((char*)&haystack[pl]);
		i = 0;
		pl++;
	}
	return (NULL);
}
