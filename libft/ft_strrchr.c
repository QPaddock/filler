/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:43:43 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/01 10:25:14 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	ch;

	ch = (char)c;
	index = ft_strlen(s);
	while (s[index] != ch && index >= 0)
	{
		if (index == 0)
			return (NULL);
		index--;
	}
	if (s[index] == ch)
		return ((char*)&s[index]);
	return (NULL);
}
