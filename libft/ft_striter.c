/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:35:30 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/12 10:27:03 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	index;

	index = 0;
	if (f)
	{
		if (s)
		{
			while (index <= ft_strlen(s) - 1)
			{
				f(&s[index]);
				index++;
			}
		}
	}
}
