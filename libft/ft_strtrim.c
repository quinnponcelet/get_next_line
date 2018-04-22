/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 10:48:44 by quintonpo         #+#    #+#             */
/*   Updated: 2017/10/03 12:59:41 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*s1;
	int		c;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = ft_trmfrnt(s);
	c = 0;
	j = ft_trmrear(s, i);
	s1 = ft_strnew(j - i + 1);
	if (!s1)
		return (NULL);
	while (i <= j)
		s1[c++] = s[i++];
	return (s1);
}
