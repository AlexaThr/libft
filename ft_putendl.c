#include <unistd.h>
#include "libft.h"

void    ft_putendl (char const *s)
{
    while (*s)
        ft_putstr(*s);
    write (1, '\n', 1);
}