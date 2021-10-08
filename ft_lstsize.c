/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:51:49 by tblaase           #+#    #+#             */
/*   Updated: 2021/10/08 17:47:34 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
/* returns the size of a list as int */
{
	t_list	*current;
	int		i;

	i = 0;
	current = lst;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
