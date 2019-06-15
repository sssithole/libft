/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssithole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:11:33 by ssithole          #+#    #+#             */
/*   Updated: 2019/06/15 10:54:16 by ssithole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	p;

	i = 0;
	p = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[i] != '\0' && p < n)
	{
		s1[i + p] = s2[p];
		p++;
	}
	s1[i + p] = '\0';
	return (s1);
}
