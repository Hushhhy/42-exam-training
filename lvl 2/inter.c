#include <unistd.h>

int check(char *s, char c, int n)
{
    while (n >= 0)
    {
        if (s[n] == c)
            return (1);
        n--;
    }
    return (0);
}

void    inter(char *s1, char *s2)
{
    int i = 0;
    int j;
    while (s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if (s1[i] == s2[j])
            {
                if (check(s1, s1[i], i - 1) == 0)
                    write(1, &s1[i], 1);
                break ;
            }
            j++;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        inter(av[1], av[2]);
    write(1, "\n", 1);
}