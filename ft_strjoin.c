#include "libft.h"
#include <string.h>
#include <stdlib.h>

char *ft_strjoin(const char *s1, const char *s2)
{
    char	*s3;

	s3 = NULL;
	if (s1 && s2)
	{
		s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!s3)
			return (NULL);
		ft_strcpy(s3, s1);
		ft_strcat(s3, s2);
	}
	return (s3);
}