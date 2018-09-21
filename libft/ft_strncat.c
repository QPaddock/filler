/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:15:22 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/01 10:28:44 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	index;
	int		appen;

	appen = ft_strlen(s1);
	index = 0;
	while (index < n && s2[index] != '\0')
	{
		s1[appen] = s2[index];
		appen++;
		index++;
	}
	s1[appen] = '\0';
	return (s1);
}
