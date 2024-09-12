#include <unistd.h>

void    first_word(char *s)
{
    int i = 0;
    while (s[i] == ' ' || s[i] == '\t')
        i++;
    while (s[i] != ' ' && s[i] != '\t')
    {
        write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        first_word(av[1]);
    write(1, "\n", 1);
}