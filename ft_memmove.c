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

void *ft_memmove (void *dst, const void *src, size_t n)
	{
		int i;
		const char *srcb;
		char *dstb;
		char *temp;

		i = 0;
		srcb = src;
		dstb = dst;
		temp = 

		while (i < n)
		{
			dstb[i] = srcb[i];
			i++;
		}
		return (dst);
	}
