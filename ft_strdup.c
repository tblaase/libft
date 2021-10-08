/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 17:55:54 by tblaase           #+#    #+#             */
/*   Updated: 2021/10/08 16:25:26 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
/* will malloc for the given string and return adress to that string */
{
	int		i;
	char	*s;

	if (!s1)
		return (NULL);
	i = 0;
	s = malloc(ft_strlen(s1) + 1);
	if (!s)
		return (NULL);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
