/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 14:21:23 by quintonpo         #+#    #+#             */
/*   Updated: 2017/10/02 16:21:52 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *s;

	if (s1 && s2)
	{
		if (!(s = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
			return (NULL);
		ft_strncpy(s, s1, ft_strlen(s1));
		ft_strncat(s, s2, ft_strlen(s2));
		return (s);
	}
	return (NULL);
}
