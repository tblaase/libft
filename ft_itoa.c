/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:03:24 by tblaase           #+#    #+#             */
/*   Updated: 2021/10/08 17:36:04 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_standard(char *str, int i, int n)
{
	if (n < 0)
	{
		str[0] = 45;
		n = n * -1;
	}
	str[i] = '\0';
	i--;
	ft_putnbr(n, str, i);
}

char	*ft_itoa(int n)
/* turns an int into a string */
{
	char	*str;
	int		i;

	i = ft_intlen(n);
	if (n == -2147483648)
		str = ft_strdup("-2147483648");
	else
	{
		if (n < 0)
			i++;
		str = malloc(i + 1);
		if (!str)
			return (NULL);
		ft_standard(str, i, n);
	}
	return (str);
}
