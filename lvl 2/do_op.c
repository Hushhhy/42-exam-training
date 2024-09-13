#include <stdlib.h>
#include<stdio.h>

void    do_op(int n1, char op, int n2)
{
    int res = 0;
    if (op == '+')
        res = (n1 + n2);
    if (op == '-')
        res = (n1 - n2);
    if (op == '*')
        res = (n1 * n2);
    if (op == '/')
        res = (n1 / n2);
    printf("%d", res);
}

int main(int ac, char **av)
{
    if (ac == 4)
        do_op(atoi(av[1]), av[2][0], atoi(av[3]));
    printf("\n");
}