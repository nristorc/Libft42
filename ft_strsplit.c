/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nristorc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:27:15 by nristorc          #+#    #+#             */
/*   Updated: 2018/01/11 16:42:47 by nristorc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countwords_single_sep(char *s, char c)
{
	int i;
	int is_word;

	i = 0;
	is_word = 0;
	while (*s)
	{
		if (is_word == 0 && *s != c)
		{
			is_word = 1;
			i++;
		}
		else if (is_word == 1 && *s == c)
			is_word = 0;
		s++;
	}
	return (i);
}

static int		ft_lenght(char *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		words;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	words = ft_countwords_single_sep((char *)s, c);
	tab = (char **)malloc(sizeof(char*) * (words + 1));
	i = 0;
	if (!tab)
		return (NULL);
	while (words--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_strsub((char *)s, 0, ft_lenght((char *)s, c));
		if (!tab[i])
			return (NULL);
		s = s + ft_lenght((char *)s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
