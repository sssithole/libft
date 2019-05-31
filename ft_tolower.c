/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssithole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:56:30 by ssithole          #+#    #+#             */
/*   Updated: 2019/05/30 15:25:43 by ssithole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int			ft_tolower(int s)
{
	if (s >= 'A' && s <= 'Z')
	{
		s = (s + 32);
	}
	return (s);
}