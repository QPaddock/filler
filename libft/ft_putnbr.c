/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:54:12 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/14 09:44:44 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int	num;

	num = (long)n;
	if (num < 0)
	{
		num = -num;
		ft_putchar('-');
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	ft_putchar((num % 10) + '0');
}
