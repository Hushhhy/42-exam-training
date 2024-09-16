#include <string.h>

int ft_strchr(const char *s, int c)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (1);
        i++;
    }
    return (0);
}

size_t ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    while (s[i])
    {
        if (ft_strchr(accept, s[i]) == 0)
            break;
        i++;
    }
    return (i);
}
#include <stdio.h>
int main(int ac, char **av)
{
    (void)ac;
    printf("mine = %zu\n", ft_strspn(av[1], av[2]));
    printf("real = %lu\n", strspn(av[1], av[2]));
}