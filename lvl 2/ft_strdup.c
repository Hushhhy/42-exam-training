#include <stdlib.h>
char    *ft_strdup(char *src)
{
    int i = 0;
    char *dest = malloc(10000);
    if (!dest)
        return (NULL);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}