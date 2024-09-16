#include <stdlib.h>
char    *ft_strndup(char *s, int n)
{
    int i = 0;
    char *s2 = malloc(n + 1);
    while (i < n && s[i])
    {
        s2[i] = s[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}

int wordlen(char *s)
{
    int i = 0;
    while (s[i] != ' ' && s[i] != '\t' && s[i])
        i++;
    return (i);
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    char **wc = malloc(10000);
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i])
    {
        if ((str[i] != ' ' && str[i] != '\t') && (str[i - 1] == ' ' || str[i - 1] == '\t' || i == 0))
        {
            wc[j] = ft_strndup(str + i, wordlen(str + i));
            j++;
        }
        i++;
    }
    wc[j] = NULL;
    return (wc);
}
// #include <stdio.h>
// int main(int ac, char **av)
// {
//     (void)ac;
//     int i = 0;
//     char **split = ft_split(av[1]);
//     while (split[i])
//     {
//         printf("%s\n", split[i]);
//         free(split[i]);
//         i++;
//     }
//     free(split);
// }