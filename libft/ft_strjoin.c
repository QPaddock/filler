/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:07:00 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/12 10:36:21 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		index;
	int		jind;
	char	*nstr;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	jind = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	index = 0;
	if (!(nstr = (char*)malloc(len + 1 * sizeof(char))))
		return (NULL);
	while (s1[index] != '\0')
	{
		nstr[index] = s1[index];
		index++;
	}
	while (s2[jind] != '\0')
	{
		nstr[index] = s2[jind];
		jind++;
		index++;
	}
	nstr[index] = '\0';
	return (nstr);
}
