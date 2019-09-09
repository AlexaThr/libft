#include <string.h>

void    *ft_memchr (const void *s, int c, size_t n)
{
    unsigned char *s2;
    int i;
    s2 = (unsigned char *)s;
    i = 0;
    if (s)
    {
        while (n--)
        {
            if (s2[i] == (unsigned char)c)
                return (&s2[i]);
            i++;
        }
    }
    return (NULL);
}