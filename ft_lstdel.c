/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nristorc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:25:52 by nristorc          #+#    #+#             */
/*   Updated: 2017/11/22 13:38:21 by nristorc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;

	if (alst && del)
	{
		list = *alst;
		while (list)
		{
			(del)(list->content, list->content_size);
			free(list);
			list = list->next;
		}
		*alst = NULL;
	}
}
