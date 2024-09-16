#include <stdlib.h>
int *ft_range(int start, int end)
{
    int *tab = malloc(10000);
    int len = (end - start) + 1;
    int i = 0;
    while (i < len)
    {
        if (start < end)
        {
            tab[i] = start;
            start++;
            i++;
        }
        else
        {
            tab[i] = start;
            start--;
            i++;
        }
    }
    return (tab);
}