#include "libft.h"

char	*ft_strrchr(char *str, int ch)
{
	int i;
	i = ft_strlen(str);
	while (str[i] != ch && i >= 0)
	{
		i--;
	}	
	
	if (str[i] == (char)ch)
	{
		return (&str[i]);
	}
	
	return (0);
}
