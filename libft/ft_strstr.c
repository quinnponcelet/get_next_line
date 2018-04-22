/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 10:27:38 by quintonpo         #+#    #+#             */
/*   Updated: 2017/10/02 14:34:11 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!little[i])
		return ((char *)&big[i]);
	while (big[j])
	{
		i = j;
		while (big[i] == little[i - j] && big[i])
		{
			i++;
		}
		if (!little[i - j])
			return ((char *)&big[j]);
		j++;
	}
	return (NULL);
}
