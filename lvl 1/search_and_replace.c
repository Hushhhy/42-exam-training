#include <unistd.h>

void    search_and_replace(char *s1, char *s2, char *s3)
{
    int i = 0;
    while (s1[i])
    {
        if (s1[i] == s2[0])
            s1[i] = s3[0];
        write(1, "\n", 1);
        i++; 
    }
}

int main(int ac, char **av)
{
    if (ac == 4)
        search_and_replace(av[1], av[2], av[3]);
    write(2, "\n", 1);
}