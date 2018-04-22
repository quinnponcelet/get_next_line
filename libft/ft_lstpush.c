/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 13:33:35 by qponcele          #+#    #+#             */
/*   Updated: 2017/10/03 13:35:38 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpush(t_list *lst, void const *content, size_t content_size)
{
	t_list	*new;
	t_list	*tmp;

	if (!(new = ft_lstnew(content, content_size)))
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (lst);
}
