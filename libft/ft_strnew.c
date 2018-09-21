/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:02:30 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/12 11:38:43 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	index;

	index = 0;
	if (!(str = (char*)malloc((size + 1) * sizeof(char))))
		return (NULL);
	str = (char*)malloc((size + 1) * sizeof(char));
	while (index <= size)
	{
		str[index] = '\0';
		index++;
	}
	return (str);
}
