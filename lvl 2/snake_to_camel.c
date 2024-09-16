#include <unistd.h>

void    snake_to_camel(char *s)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == '_')
        {
            i++;
            s[i] -= 32;
        }
        write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        snake_to_camel(av[1]);
    write(1, "\n", 1);
}