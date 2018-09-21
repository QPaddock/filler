/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 11:05:09 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/06 15:01:02 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_nl(char *tmp)
{
	int		i;

	i = 0;
	while (tmp[i] != '\n' && tmp[i] != '\0')
		i++;
	return (i);
}

static void	read_line(char *buf, char **tmp, char **str, int fd)
{
	int			r_val;

	while ((r_val = read(fd, buf, BUFF_SIZE)))
	{
		buf[r_val] = '\0';
		*str = ft_strjoin(*tmp, buf);
		free(*tmp);
		*tmp = *str;
		if (ft_strchr(buf, '\n'))
			break ;
	}
}

int			get_next_line(const int fd, char **line)
{
	int			i;
	static char	*tmp;
	char		buf[BUFF_SIZE + 1];
	int			r_val;
	char		*str;

	if (tmp == NULL)
		tmp = ft_strnew(0);
	if (fd < 0 || !line || (r_val = read(fd, buf, 0) < 0))
		return (-1);
	*line = ft_strnew(0);
	read_line(buf, &tmp, &str, fd);
	i = find_nl(tmp);
	if ((!i && r_val == 0) && (*tmp != '\n' && !tmp[0]))
	{
		return (0);
	}
	str = tmp;
	free(*line);
	*line = ft_strsub(str, 0, i);
	tmp = ft_strsub(str, i + 1, ft_strlen(tmp + i + 1));
	free(str);
	return (1);
}
