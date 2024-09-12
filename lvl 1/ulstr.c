#include <unistd.h>

void    ulstr(char *s)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] -= 32;
        write(1, "\n", 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ulstr(av[1]);
    write(1, "\n", 1);
}