/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 14:39:42 by qponcele          #+#    #+#             */
/*   Updated: 2017/10/02 14:40:28 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*st;

	i = 0;
	s = ((unsigned char *)s1);
	st = ((unsigned char *)s2);
	while (n--)
	{
		if (s[i] != st[i])
			return (s[i] - st[i]);
		i++;
	}
	return (0);
}
