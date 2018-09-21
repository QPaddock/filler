/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 07:56:11 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/13 13:53:04 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int		size;

	size = 0;
	if (n < 0)
	{
		n = n * -1;
		size = 1;
	}
	while (n > 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

static void	num_mem(int n, char **num)
{
	int		size;

	size = 0;
	size = size + num_len(n) + 1;
	*num = (char*)malloc(size * sizeof(char));
}

static char	*make_wd(char *num, int size, int i, int n)
{
	while (size >= i)
	{
		num[size] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	return (num);
}

static int	check(int n, char **num)
{
	if (n == 2147483647)
	{
		*num = ft_strdup("2147483647");
		return (0);
	}
	if (n == -2147483648)
	{
		*num = ft_strdup("-2147483648");
		return (0);
	}
	return (1);
}

char		*ft_itoa(int n)
{
	int			i;
	int			size;
	char		*num;
	long int	no;

	no = n;
	i = 0;
	if (no == 0)
		return (ft_strdup("0"));
	num_mem(n, &num);
	if (check(n, &num) == 0)
		return (num);
	if (!num)
		return (NULL);
	size = num_len(n);
	num[size] = '\0';
	size--;
	if (no < 0)
	{
		num[0] = '-';
		n = n * -1;
		i++;
	}
	return (make_wd(num, size, i, n));
}
