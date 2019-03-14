/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoindel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nristorc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:31:21 by nristorc          #+#    #+#             */
/*   Updated: 2018/01/18 12:25:36 by nristorc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoindel(char *s1, char const *s2)
{
	char	*new;
	size_t	size;

	new = NULL;
	if (s1 && s2)
	{
		size = ft_strlen(s1) + ft_strlen(s2);
		if (!(new = ft_strnew(size)))
			return (NULL);
		new = ft_strcpy(new, s1);
		ft_strdel(&s1);
		new = ft_strcat(new, s2);
	}
	return (new);
}
