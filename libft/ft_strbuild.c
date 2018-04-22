/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuild.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 13:08:03 by qponcele          #+#    #+#             */
/*   Updated: 2017/10/03 13:09:52 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strbuild(char const *s, char c, unsigned int *i)
{
	unsigned	j;
	unsigned	st;
	char		*str;

	while (s[*i] == c && s[*i])
		(*i)++;
	st = *i;
	while (s[*i] != c && s[*i])
		(*i)++;
	if (!(str = ft_strnew(*i - st)))
		return (NULL);
	j = 0;
	while (st < *i)
		str[j++] = s[st++];
	str[j] = '\0';
	return (str);
}
