/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:42:21 by tblaase           #+#    #+#             */
/*   Updated: 2021/10/08 16:55:21 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_unsigned_nbr(unsigned int a)
/* write a unsigned int to standard out */
{
	char	c;

	if (a >= 10)
	{
		ft_put_unsigned_nbr(a / 10);
		ft_put_unsigned_nbr(a % 10);
	}
	else
	{
		c = a + '0';
		write(1, &c, 1);
	}
}
