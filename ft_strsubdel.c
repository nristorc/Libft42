/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nristorc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 12:03:36 by nristorc          #+#    #+#             */
/*   Updated: 2018/01/18 12:06:33 by nristorc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsubdel(char *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	new = NULL;
	if (s)
	{
		if (!(new = ft_strnew(len)))
			return (NULL);
		while (i < len)
		{
			new[i] = s[start + i];
			i++;
		}
		new[i] = '\0';
	}
	ft_strdel(&s);
	return (new);
}
