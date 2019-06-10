/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssithole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:35:24 by ssithole          #+#    #+#             */
/*   Updated: 2019/06/10 10:41:52 by ssithole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	if (ft_strlen(s1) != ft_strlen(s2) && (!s1 || !s2))
	{
		return (0);
	}
	while (*s1 && *s2 && (i < n))
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		s1++;
		s2++;
		i++;
	}
	return (1);
}
