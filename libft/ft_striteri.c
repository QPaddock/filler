/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:41:09 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/12 09:13:06 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	index = 0;
	if (f)
	{
		if (s)
		{
			while (*s != '\0')
			{
				f(index, s);
				index++;
				s++;
			}
		}
	}
}
