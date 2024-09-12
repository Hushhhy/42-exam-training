#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    putnbr(int n)
{
    if (n > 9)
    {
        putnbr(n / 10)
        putnbr(n % 10)
    }
    ft_putchar(n + 48);
}

int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 5 == 0)
            write(1, "fizz", 4);
        else if (i % 3 == 0)
            write(1, "buzz", 4);
        else
            putnbr(i);
        write(1, "\n", 1);
    }
}