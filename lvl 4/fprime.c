#include <stdlib.h>
#include <stdio.h>

void    fprime(int nb)
{
    int i = 2;
    if (nb == 1)
        printf("1");
    while (i <= nb)
    {
        if (nb % i == 0)
        {
            printf("%d", 1);
            if (i == nb)
                break ;
            printf("*");
            nb /= i;
            i = 1;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        fprime(atoi(av[1]));
    printf("\n");
}