int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int j = ft_strlen(str) - 1;
    char tmp;
    while(str[i] && j > i)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return (str);
}
#include <stdio.h>
int main(int ac, char **av)
{
    (void)ac;
    printf("%s\n", ft_strrev(av[1]));
}