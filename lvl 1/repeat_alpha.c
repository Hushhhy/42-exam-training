#include <unistd.h>

void    repeat_alpha(char *s)
{
    int i = 0;
    int count;
    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            count = s[i] - 'a' + 1;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            count = s[i] - 'A' + 1;
        else
            count = 1;
        while (count--)
            write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        repeat_alpha(av[1]);
    write(1, "\n", 1);
}