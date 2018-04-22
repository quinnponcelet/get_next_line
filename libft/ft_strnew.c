/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 16:41:49 by quintonpo         #+#    #+#             */
/*   Updated: 2017/09/28 12:36:02 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	s = (char *)malloc(sizeof(char) * size + 1);
	if (!s)
		return (NULL);
	ft_bzero(s, size + 1);
	return (s);
}
