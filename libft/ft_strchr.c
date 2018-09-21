/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:25:55 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/01 11:37:53 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	find;

	index = 0;
	find = (char)c;
	while (s[index] != find && s[index] != '\0')
		index++;
	if (s[index] == find)
		return ((char*)&s[index]);
	else
		return (NULL);
}
