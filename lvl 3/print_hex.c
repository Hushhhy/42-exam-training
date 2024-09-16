#include<unistd.h>

int ft_atoi(char *s)
{
    int i = 0;
    int res = 0;
    while (s[i])
    {
        res = res * 10 + s[i] - 48;
        i++;
    }
    return (res);
}

void    print_hex(int nb)
{
    char *s = "0123456789abcdef";
    if (nb >= 16)
        print_hex(nb / 16);
    write(1, &s[nb % 16], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        print_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
}