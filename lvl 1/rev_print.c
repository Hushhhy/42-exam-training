#include <unistd.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

char *rev_print(char *str)
{
    int i = ft_strlen(str) - 1;
    while (i >= 0)
    {
        write(1, &s[i], 1);
        i--;
    }
    return (str);
}