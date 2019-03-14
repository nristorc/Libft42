/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nristorc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:32:48 by nristorc          #+#    #+#             */
/*   Updated: 2017/11/16 15:26:47 by nristorc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_whitespace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*new;
	size_t	start;
	size_t	end;

	new = NULL;
	start = 0;
	if (s)
	{
		end = ft_strlen(s);
		while (ft_whitespace(s[start]))
			start++;
		while (ft_whitespace(s[end - 1]))
			end--;
		if (end < start)
			end = start;
		if (!(new = ft_strnew(end - start)))
			return (NULL);
		ft_strncpy(new, (s + start), (end - start));
	}
	return (new);
}
