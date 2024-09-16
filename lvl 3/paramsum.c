#include <unistd.h>

void    paramsum(int n)
{
    char digit;
    if (n > 9)
        paramsum(n / 10);
    digit = (n % 10) + 48;
    write(1, &digit, 1);
}

int main(int ac, char **av)
{
    (void)av;
    if (ac > 1)
        paramsum(ac - 1);
    write(1, "\n", 1);
}