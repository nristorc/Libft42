/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nristorc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:35:08 by nristorc          #+#    #+#             */
/*   Updated: 2017/11/20 10:16:18 by nristorc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countdigit(int n)
{
	int i;

	i = 1;
	if (n == -2147483648)
	{
		i++;
		n = -147483648;
	}
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		i++;
		n = (n / 10);
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int		count;
	char	*str;
	char	negative;

	negative = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		negative = 1;
	count = ft_countdigit(n);
	if (!(str = ft_strnew(count + negative)))
		return (NULL);
	if (negative)
	{
		n = -n;
		str[0] = '-';
	}
	while (count > 0)
	{
		str[count + negative - 1] = (n % 10) + '0';
		count--;
		n = n / 10;
	}
	return (str);
}
