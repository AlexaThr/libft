#include <stdlib.h>
#include <string.h>
#include "libft.h"

void    *ft_memalloc (size_t size)
{
    char *s;
    s = malloc(size);
    if (s == NULL)
        return (NULL);
    else
        ft_bzero(s, size);
    return (s);
}