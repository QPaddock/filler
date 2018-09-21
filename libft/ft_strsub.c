/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:54:56 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/12 10:29:39 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*nstr;

	index = 0;
	if (!s)
		return (NULL);
	nstr = (char*)malloc(len + 1 * sizeof(char));
	if (!(nstr = (char*)malloc(len + 1 * sizeof(char))))
		return (NULL);
	while (index != len)
	{
		nstr[index] = s[start + index];
		index++;
	}
	nstr[index] = '\0';
	return (nstr);
}
