/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 09:50:00 by tblaase           #+#    #+#             */
/*   Updated: 2021/10/08 17:54:56 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
/* if c represents a uppercase letter of ascii, translates it its lowercase */
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}
