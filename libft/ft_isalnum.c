/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:54:16 by qpaddock          #+#    #+#             */
/*   Updated: 2018/05/21 12:51:42 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	int		digit;
	int		alpha;

	alpha = ft_isalpha(c);
	digit = ft_isdigit(c);
	if (digit != 0 || alpha != 0)
		return (1);
	else
		return (0);
}
