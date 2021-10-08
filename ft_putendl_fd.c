/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:07:51 by tblaase           #+#    #+#             */
/*   Updated: 2021/10/08 17:49:45 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
/* writes s to fd followed by a \n */
{
	int		i;
	char	c;

	i = 0;
	ft_putstr_fd(s, fd);
	c = '\n';
	write (fd, &c, 1);
}
