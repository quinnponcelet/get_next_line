/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 11:16:02 by qponcele          #+#    #+#             */
/*   Updated: 2017/10/02 14:38:01 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *s;

	s = (void *)malloc(sizeof(void) * size);
	if (!s)
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
