/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:27:56 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/12 14:39:32 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		index;
	char	*nstr;

	if (s && f)
	{
		index = 0;
		nstr = (char*)malloc(ft_strlen(s) + 1 * sizeof(char));
		if (!(nstr = (char*)malloc(ft_strlen(s) + 1 * sizeof(char))))
			return (NULL);
		while (s[index] != '\0')
		{
			nstr[index] = f(s[index]);
			index++;
		}
		nstr[index] = '\0';
		return (nstr);
	}
	return (NULL);
}
