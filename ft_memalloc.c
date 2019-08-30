#include <stdlib.h>
#include <string.h>
#include "libft.h"

void    *ft_memalloc (size_t size)
{
    void *ptr;
    ptr = malloc(size);
    if (ptr == NULL)
        return (NULL);
    else
        ft_bzero(ptr, size);
    return (ptr);
}