/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:32:38 by qponcele          #+#    #+#             */
/*   Updated: 2017/10/02 14:52:27 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	int		s;

	i = ft_strlen(dst);
	j = 0;
	s = ft_strlen(dst);
	if (i > size)
		return (ft_strlen((char*)src) + size);
	else
		while (i < size - 1)
			dst[i++] = src[j++];
	dst[i] = '\0';
	return (s + ft_strlen((char*)src));
}
