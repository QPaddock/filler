/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:09:36 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/12 10:46:47 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		index;

	index = 0;
	if (s && fd)
	{
		while (s[index] != '\0')
		{
			ft_putchar_fd(s[index], fd);
			index++;
		}
	}
}
