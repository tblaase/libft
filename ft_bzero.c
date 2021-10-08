/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:35:32 by tblaase           #+#    #+#             */
/*   Updated: 2021/10/08 17:34:08 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
/* sets every byte of s to NULL */
{
	unsigned int	i;
	unsigned char	*c;

	i = 0;
	c = (unsigned char *)s;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
