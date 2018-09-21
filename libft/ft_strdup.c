/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:38:21 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/01 11:29:01 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		index;

	index = 0;
	dup = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!(dup))
		return (NULL);
	while (str[index] != '\0')
	{
		dup[index] = str[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}
