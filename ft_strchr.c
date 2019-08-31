#include "libft.h"


char *ft_strchr(char *str, int ch)
{
	int i;
	i = 0;
	while (str[i] != ch && i <= ft_strlen(str))
	{
		i++;
	}	
	
	if (str[i] == (char)ch)
	{
		return (&str[i]);
	}
	
	return (0);
}
