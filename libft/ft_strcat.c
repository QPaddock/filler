/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:49:36 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/01 10:32:46 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		index;
	int		append;

	index = 0;
	append = ft_strlen(s1);
	while (s2[index] != '\0')
	{
		s1[append] = s2[index];
		append++;
		index++;
	}
	s1[append] = '\0';
	return (s1);
}
