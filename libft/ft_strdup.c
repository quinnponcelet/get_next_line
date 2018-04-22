/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 14:27:29 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/24 15:54:22 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *str)
{
	char *s;

	s = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (s)
		return (ft_strcpy(s, str));
	return (NULL);
}
