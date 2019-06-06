/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssithole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 08:43:49 by ssithole          #+#    #+#             */
/*   Updated: 2019/06/06 10:36:42 by ssithole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *s;

	s = malloc(size);
	if (s == NULL)
		return (NULL);
	ft_bzero(s,size);
	return (s);
}
#include <stdio.h>

int main ()
{
	void *s = "hey";
	ft_memalloc(sizeof(s));
	return (0);
}