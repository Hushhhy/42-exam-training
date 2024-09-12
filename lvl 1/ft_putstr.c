#include <unistd.h>

void    ft_putstr(char *str)
{
    int i = 0;
    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}