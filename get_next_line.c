/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 13:32:32 by qponcele          #+#    #+#             */
/*   Updated: 2018/10/02 15:34:37 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/libft.h"

int		get_line(const int fd, char **arr)
{
	char	buff[BUFF_SIZE + 1];
	char	*mem;
	int		r;

	r = 1;
	while (!ft_strchr(*arr, '\n') && r > 0)
	{
		r = read(fd, buff, BUFF_SIZE);
		buff[r] = '\0';
		mem = *arr;
		*arr = ft_strjoin(*arr, buff);
		ft_strdel(&mem);
	}
	return (r);
}

int		get_next_line(const int fd, char **line)
{
	static char *arr[4865];
	char		*tmp;
	char		*mem;

	if ((fd >= 0 && fd < 4865) && !arr[fd])
		arr[fd] = ft_strnew(BUFF_SIZE);
	if (!line || fd < 0 || fd > 4864 || BUFF_SIZE < 0 ||
		-1 == read(fd, arr[fd], 0) || get_line(fd, &arr[fd]) < 0)
		return (-1);
	if ((tmp = ft_strchr(arr[fd], '\n')))
	{
		mem = arr[fd];
		*tmp++ = '\0';
		*line = ft_strdup(arr[fd]);
		arr[fd] = ft_strdup(tmp);
		ft_strdel(&mem);
		return (1);
	}
	*line = ft_strdup(arr[fd]);
	ft_bzero(arr[fd], ft_strlen(arr[fd]));
	return (ft_strlen(*line) > 0 ? 1 : 0);
}
