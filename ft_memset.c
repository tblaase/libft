/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:43:26 by tblaase           #+#    #+#             */
/*   Updated: 2021/10/08 16:19:22 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	a;
	unsigned int	i;
	unsigned char	*b1;

	a = c;
	i = 0;
	b1 = (unsigned char *)b;
	while (i < len)
	{
		b1[i] = a;
		i++;
	}
	return (b1);
}
