/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssithole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:17:56 by ssithole          #+#    #+#             */
/*   Updated: 2019/06/11 15:00:52 by ssithole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
    size_t l;
    size_t m;
    
    l = 0;
    if(needle[0] == '\0')
        return((char *)haystack);
    while(haystack[l] && (l + strlen(needle)))
        m = 0;
        while(haystack[l] == needle[m])
            if(m == strlen(needle))
                return((char *)haystack);
            m++;
        l++;
    return 0;
}
