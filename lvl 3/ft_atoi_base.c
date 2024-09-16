#include <string.h>

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

int get_digit(char c)
{
    char *s = "0123456789abcdef";
    int i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    if (str == NULL || str_base < 2 || str_base > 16)
        return NULL;
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while (str[i])
    {
        if (get_digit(to_lower(str[i])) == -1)
            break ;
        res = res * str_base + get_digit(to_lower(str[i]));
        i++;
    }
    return (res * sign);
}