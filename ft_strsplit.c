#include "libft.h"
#include <stdlib.h>

/*
**Alloue (avec malloc(3)) et retourne un tableau de 
**chaînes de caractères “fraiches” 
**(toutes terminées par un ’\0’, le tableau également donc) 
**résultant de la découpe de s selon le caractère c. 
**Si l’allocation echoue, la fonction retourneNULL. 
**Exemple :ft_strsplit("*salut*les***etudiants*", ’*’)
**renvoiele tableau["salut", "les", "etudiants"]
*/


int wordcount (char const *str, char c)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while (str[i])
    {
        while (str[i] == c)
            i++;
        if (str[i] != c && str[i])
            count++;
        while (str[i] != c && str[i])
            i++;
    }
    return (count);
}

char    **ft_strsplit (char const *s, char c)
{
    char    **a;
    size_t    inside_a_word;
    size_t    word_index;
    size_t    i;
    size_t    start;

    if (!s)
        return (NULL);
    if (!(a = (char **)ft_memalloc((ft_countwords(s, c) + 1) * sizeof(char *))))
        return (NULL);
    word_index = 0;
    inside_a_word = 0;
    i = -1;
    start = 0;
    while (s[++i])
    {
        if (inside_a_word && s[i] == c)
            a[word_index++] = ft_strsub(s, start, i - start);
        if (!inside_a_word && s[i] != c)
            start = i;
        inside_a_word = (s[i] == c) ? 0 : 1;
    }
    if (inside_a_word)
        a[word_index] = ft_strsub(s, start, i - start);
    return (a);
}