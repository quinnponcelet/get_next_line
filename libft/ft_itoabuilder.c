/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabuilder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 12:37:01 by qponcele          #+#    #+#             */
/*   Updated: 2017/10/03 12:49:44 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoabuilder(long *n, size_t *c)
{
	char	*s;
	long	n1;
	size_t	t;

	t = 0;
	if (*n < 0)
	{
		*n *= -1;
		t++;
	}
	n1 = *n;
	while (n1 /= 10)
		(*c)++;
	(*c) += t;
	if (!(s = ft_strnew(*c)))
		return (NULL);
	else if (t > 0)
		s[0] = '-';
	s[*c] = '\0';
	return (s);
}
