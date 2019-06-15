/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssithole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 13:25:23 by ssithole          #+#    #+#             */
/*   Updated: 2019/06/14 13:29:44 by ssithole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char	*s;

	*s = (char *)malloc(sizeof(char) * n + 1);
	if (s == NULL)
		return (NULL);
	*s = ft_strncpy(s, str, n);
	s[n] = '\0';
	return (s);
}
