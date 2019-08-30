#include "libft.h"
#include <string.h>

char *ft_strsub (char const *s, unsigned int start, size_t len)
{
    char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		str[i] = s[i + start];
		i += 1;
	}
	str[i] = '\0';
	return (str);
}