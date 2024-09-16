#include <unistd.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

void    last_word(char *s)
{
    int i = ft_strlen(s) - 1;
    while (s[i] && (s[i] == ' ' || s[i] == '\t'))
        i--;
    while (s[i] && (s[i] != ' ' && s[i] != '\t'))
        i--;
    i++;
    while (s[i] && (s[i] != ' ' && s[i] != '\t'))
    {
        write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        last_word(av[1]);
    write(1, "\n", 1);
}