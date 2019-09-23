/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athorne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 17:24:00 by athorne           #+#    #+#             */
/*   Updated: 2019/06/18 17:26:06 by athorne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strncat (char *dest, const char *src, size_t n)
{
	int i;
	int j;
	i = 0;
	j = 0;

	while (dest[i])
		i++;
	while (src[j] && j < (int)n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

