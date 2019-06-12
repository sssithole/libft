/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssithole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:20:14 by ssithole          #+#    #+#             */
/*   Updated: 2019/06/12 10:41:54 by ssithole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2) 
{
	if (ft_strlen(s1) != ft_strlen(s2) && (!s1 || !s2))
	{
		return (0);
	}
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (1);
}
