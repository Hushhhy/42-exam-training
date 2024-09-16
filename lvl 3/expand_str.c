#include <unistd.h>

void    expand_str(char *s)
{
    int i = 0;
    int sp = -1;
    while (s[i])
    {
        if (s[i] != ' ' && s[i] != '\t')
        {
            if (sp == 1)
                write(1, "   ", 3);
            sp = 0;
            write(1, &s[i], 1);
        }
        else if (sp == 0)
            sp = 1;
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        expand_str(av[1]);
    write(1, "\n", 1);
}