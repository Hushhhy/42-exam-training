#include <string.h>
size_t ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;
    while (reject[j])
    {
        while(s[i])
        {
            if (s[i] == reject[j])
                return (i);
            i++;
        }
        j++;
    }
    return (i);
}
#include <stdio.h>
int main(int ac, char **av)
{
    (void)ac;
    printf("mine = %zu\n", ft_strcspn(av[1], av[2]));
    printf("real = %lu\n", strcspn(av[1], av[2]));
}