/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:21:52 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/12 10:37:38 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	strt;

	strt = 0;
	if (!s)
		return (NULL);
	while (s[strt] == ' ' || s[strt] == '\t' || s[strt] == '\n')
		strt++;
	if (s[strt] == '\0')
		return (ft_strdup(s + strt));
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	return (ft_strsub(s, strt, len - strt + 1));
}
