#include <string.h>

char    *ft_strnstr (const char *str, const char *to_find, size_t len)
{
    size_t i;
    size_t j;

    if (to_find[0] == '\0')
        return ((char *)str);
    i = 0;
    while (i < len && str[i])
    {
        j = 0;
        while (to_find[j] != '\0')
        {
            if (i + j >= len || str[i + j] != to_find[j])
                break;
            j++;
        }
        if (to_find[j] == '\0')
            return ((char *)(str + i));
        i++;
    }
    return (0);
}