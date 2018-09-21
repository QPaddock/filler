/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:25:33 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/13 11:32:20 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwd(const char *s, char c)
{
	int		index;
	int		sub;

	index = 0;
	sub = 0;
	while (*s != '\0')
	{
		if (sub == 1 && *s == c)
			sub = 0;
		if (sub == 0 && *s != c)
		{
			sub = 1;
			index++;
		}
		s++;
	}
	return (index);
}

static int	ft_wrdlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**split;
	int		wd;
	int		index;

	if (!s)
		return (NULL);
	index = 0;
	wd = ft_countwd(s, c);
	if (!(split = (char**)malloc((wd + 1) * sizeof(*split))))
		return (NULL);
	split[wd] = NULL;
	while (wd--)
	{
		while (*s == c && *s != '\0')
			s++;
		split[index] = ft_strsub(s, 0, ft_wrdlen(s, c));
		s = s + ft_wrdlen(s, c);
		index++;
	}
	return (split);
}
