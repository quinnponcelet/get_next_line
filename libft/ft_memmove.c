/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 22:33:25 by qponcele          #+#    #+#             */
/*   Updated: 2017/10/02 14:31:43 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst > src)
	{
		i = len;
		while (i-- > 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
		return (dst);
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
		return (dst);
	}
}
