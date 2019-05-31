/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssithole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:51:45 by ssithole          #+#    #+#             */
/*   Updated: 2019/05/31 09:57:50 by ssithole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;

	i =-1;
	if (!s1 || !(copy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)))
	{
		return (NULL);
	}
	while (s1[++i])
	{
		copy[i] = s1[i];
	}
	copy[i] = '\0';
	return (copy);
}
