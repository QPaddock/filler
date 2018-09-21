/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:00:10 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/12 11:51:57 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_neg(char s)
{
	int neg;

	neg = 1;
	if (s == '-')
		neg = -1;
	return (neg);
}

int			ft_atoi(const char *str)
{
	int				index;
	unsigned long	num;
	int				neg;

	neg = 1;
	num = 0;
	index = 0;
	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n'
			|| str[index] == '\v' || str[index] == '\f' || str[index] == '\r'
			|| str[index] == '\b')
		index++;
	neg = is_neg(str[index]);
	if (str[index] == '+' || str[index] == '-')
		index++;
	while (str[index] <= '9' && str[index] >= '0')
	{
		num = num * 10;
		num = num + (str[index] - '0');
		index++;
	}
	if (9223372036854775807 < num && neg == -1)
		return (0);
	if (9223372036854775807 < num)
		return (-1);
	return (num * neg);
}
