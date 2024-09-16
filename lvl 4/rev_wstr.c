#include <unistd.h>

void    rev_wstr(char *s)
{
    int end;
    int start;
    int i = 0;
    while (s[i])
        i++;
    while (i >= 0)
    {
        if (s[i] == '\0')
            end = i - 1;
        else
            end = i;
        while (s[i] != ' ' && i >= 0)
            i--;
        start = i + 1;
        while (start <= end)
        {
            write(1, &s[start], 1);
            start++;
        }
        if (start > end && s[i] != '\0')
            write(1, " ", 1);
        i--;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rev_wstr(av[1]);
    write(1, "\n", 1);
}