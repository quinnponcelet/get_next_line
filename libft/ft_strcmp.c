/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 14:55:59 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/24 21:51:00 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *st1;
	unsigned char *st2;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	while (*st1 && *st2 && *st1 == *st2)
	{
		st1++;
		st2++;
	}
	return (*st1 - *st2);
}
