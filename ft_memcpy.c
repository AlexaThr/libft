/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athorne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:21:38 by athorne           #+#    #+#             */
/*   Updated: 2019/06/18 16:38:54 by athorne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy (void *dst, const void *src, size_t n)
	{
		size_t i;
		const char *srcb;
		char *dstb;

		i = 0;
		srcb = src;
		dstb = dst;

		while (i < n)
		{
			dstb[i] = srcb[i];
			i++;
		}
		return (dst);
	}
