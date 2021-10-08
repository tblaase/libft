/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:44:04 by tblaase           #+#    #+#             */
/*   Updated: 2021/10/08 16:33:16 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
/* will return the length of a string
** will return 0 if the string is NULL */
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}
