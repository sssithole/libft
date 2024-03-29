/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssithole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:07:19 by ssithole          #+#    #+#             */
/*   Updated: 2019/06/18 14:44:14 by ssithole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t j;
	size_t i;

	j = 0;
	i = 0;
	if (!s)
	{
		return ;
	}
	while (s[i] != '\0')
	{
		(*f)(j, &s[i]);
		i++;
		j++;
	}
}
