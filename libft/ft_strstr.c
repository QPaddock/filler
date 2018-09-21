/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:34:39 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/12 15:01:03 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		index;
	int		nindex;
	int		yindex;

	yindex = 0;
	index = 0;
	nindex = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[index] != '\0' && haystack[0])
	{
		if (haystack[index] == needle[nindex])
		{
			nindex++;
			index++;
		}
		if (needle[nindex] == '\0')
			return ((char*)&haystack[index - nindex]);
		if (haystack[index] != needle[nindex])
		{
			nindex = 0;
			index = yindex++;
		}
	}
	return (NULL);
}
