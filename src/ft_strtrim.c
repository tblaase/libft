/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:10:45 by tblaase           #+#    #+#             */
/*   Updated: 2022/02/01 13:54:31 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	ft_start(const char *s1, const char *set)
{
	unsigned int	c;
	int				i;

	c = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		while (set[c] != '\0' && s1[i] != set[c])
			c++;
		if (set[c] == '\0')
			break ;
		c = 0;
		i++;
	}
	return (i);
}

static int	ft_end(const char *s1, const char *set)
{
	unsigned int	c;
	int				i;

	c = 0;
	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		while (set[c] != '\0' && s1[i] != set[c])
			c++;
		if (set[c] == '\0')
			break ;
		c = 0;
		if (i == 0)
			break ;
		i--;
	}
	return (i);
}

/* will trim all appearances of set from the start and the end of s
*  returns NULL if s1 or set is NULL */
char	*ft_strtrim(const char *s1, const char *set)
{
	char			*c;
	unsigned int	start;
	unsigned int	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1[0] == '\0')
		return ((char *)s1);
	start = ft_start(s1, set);
	len = ft_end(s1, set) - start + 1;
	if (start == (unsigned int)ft_strlen(s1))
	{
		c = malloc(1);
		c[0] = '\0';
		return (c);
	}
	c = ft_substr(s1, start, len);
	return (c);
}
