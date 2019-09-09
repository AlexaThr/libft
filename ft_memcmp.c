#include <string.h>

int ft_memcmp (const void *s1, const void *s2, size_t n)
{
    int i;
    int res;
    int i = 0;

    if (n == 0)
        return (0);
    
    while (n--)
    {
        while (((unsigned char*)s1)[i] == ((unsigned char *)s2)[i] && i < n)
            i++;
    }
    res = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
    return (res);
}