/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:28:24 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/12 10:06:28 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*nstr;

	if (s && f)
	{
		index = 0;
		nstr = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));
		if (!nstr)
			return (NULL);
		while (s[index] != '\0')
		{
			nstr[index] = f(index, s[index]);
			index++;
		}
		nstr[index] = '\0';
		return (nstr);
	}
	return (NULL);
}
