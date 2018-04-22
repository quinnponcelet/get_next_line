/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 10:47:20 by quintonpo         #+#    #+#             */
/*   Updated: 2017/10/03 13:12:12 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	unsigned	i;
	unsigned	j;
	unsigned	w;
	char		**a;

	i = 0;
	w = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			w++;
		i++;
	}
	if (!(a = (char **)malloc(sizeof(char *) * (w + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < w)
		a[i++] = ft_strbuild(s, c, &j);
	a[i] = 0;
	return (a);
}
