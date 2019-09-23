/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athorne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 19:38:07 by athorne           #+#    #+#             */
/*   Updated: 2019/01/15 21:50:52 by athorne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	if (!*to_find)
		return ((char*)str);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (to_find[j] && str[i + j] == to_find[j])
			{
				++j;
			}
			if (to_find[j] == '\0')
				return ((char*)&str[i]);
		}
		++i;
	}
	return (0);
}
