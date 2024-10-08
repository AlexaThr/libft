#include <string.h>

void    *ft_memccpy (void *dest, const void *src, int c, size_t n)
{
    unsigned int i;
    i = 0;
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        if (((unsigned char*)src)[i] == (unsigned char)c)
            return (&((unsigned char *)dest)[i + 1]);
        i++;
    }
    return (NULL);
}