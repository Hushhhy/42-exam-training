#include <unistd.h>

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

void    putnbr(int n)
{
    char digit;
    if (n > 9)
        putnbr(n / 10);
    digit = n % 10 + 48;
    write(1, &digit, 1);
}

int is_prime(int nb)
{
    int i = 2;
    if (nb <= 1)
        return (0);
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void    add_prime_sum(int nb)
{
    int sum = 0;
    while (nb > 0)
    {
        if (is_prime(nb))
            sum += nb;
        nb--;
    }
    putnbr(sum);
}

int main(int ac, char **av)
{
    if (ac == 2)
        add_prime_sum(ft_atoi(av[1]));
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}