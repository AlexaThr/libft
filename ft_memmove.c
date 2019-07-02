/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athorne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:40:40 by athorne           #+#    #+#             */
/*   Updated: 2019/06/18 16:56:45 by athorne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t                i;
    unsigned char        *ptr;
    const unsigned char    *ptr2;

    ptr = (unsigned char*)dst;
    ptr2 = (unsigned char*)src;
    i = 0;
    if (ptr2 < ptr)
        while (++i <= len)
            ptr[len - i] = ptr2[len - i];
    else
        while (len-- > 0)
            *(ptr++) = *(ptr2++);
    return (dst);
}
