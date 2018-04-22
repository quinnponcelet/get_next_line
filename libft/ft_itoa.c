/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 23:02:42 by qponcele          #+#    #+#             */
/*   Updated: 2017/10/03 12:44:27 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*s;
	long	nbr;
	size_t	c;

	c = 1;
	nbr = n;
	if (!(s = ft_itoabuilder(&nbr, &c)))
		return (NULL);
	if (nbr < 0)
		nbr *= -1;
	while (nbr > 9)
	{
		s[--c] = (nbr % 10) + 48;
		nbr /= 10;
	}
	s[--c] = (nbr % 10) + 48;
	return (s);
}
