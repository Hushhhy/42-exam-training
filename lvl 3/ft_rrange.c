int *ft_rrange(int start, int end)
{
    int *tab;
    int i = 0;
    tab = malloc(10000);
    while (start != end)
    {
        tab[i++] = end;
        end -= (start > end) ? -1 : 1;
    }
    tab[i] = end;
    return (tab);
}