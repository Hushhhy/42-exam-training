#include <stdlib.h>

char    *ft_itoa(int nbr)
{
    if(nbr == -2147483648)
		return("-2147483648\0");
    int i = 0;
    int n = nbr;
    if (nbr <= 0)
        i++;
    while (n)
    {
        n /= 10;
        i++;
    }
    char *s = malloc(1000);
    if (!s)
        return NULL;
    s[i] = '\0';
    if (nbr == 0)
    {
        s[0] = '0';
        return(s);
    }
    if (nbr < 0)
    {
        s[0] = '-';
        nbr = -nbr;
    }
    while (nbr)
    {
        i--;
        s[i] = nbr % 10 + 48;
        nbr /= 10;
    }
    return (s);
}