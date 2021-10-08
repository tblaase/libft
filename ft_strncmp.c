/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:15:28 by tblaase           #+#    #+#             */
/*   Updated: 2021/10/08 16:28:11 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
/* recreates the behavior of strncmp from string.h */
{
	size_t			i;
	size_t			strlen1;
	size_t			strlen2;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	strlen1 = ft_strlen(s1);
	strlen2 = ft_strlen(s2);
	while (i < n && i <= strlen1 && i <= strlen2)
	{
		a = (unsigned char)s1[i];
		b = (unsigned char)s2[i];
		if (a == b)
			i++;
		else if (a > b)
			return (1);
		else
			return (-1);
	}
	return (0);
}
