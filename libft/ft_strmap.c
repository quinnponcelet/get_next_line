/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 17:43:54 by qponcele          #+#    #+#             */
/*   Updated: 2017/10/02 15:53:05 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*s1;
	unsigned	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(s1 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[i])
	{
		s1[i] = f(s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
