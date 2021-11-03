/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:04:21 by tblaase           #+#    #+#             */
/*   Updated: 2021/11/03 18:14:50 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* will return a pointer to the position of last appearance of c in s
** will return a pointer to NULL if not found */
char	*ft_strrchr(const char *s, int c)
{
	char	a;
	int		i;

	if (!s)
		return (NULL);
	a = c;
	i = ft_strlen(s);
	while (s && s[i] != a && i > 0)
		i--;
	if (s[i] == a)
		return ((char *)(s + i));
	else
		return (NULL);
}
