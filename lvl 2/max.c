int max(int* tab, unsigned int len)
{
    int i = 0;
    if (len == 0)
        return (0);
    int cur = tab[i];
    while (i < len)
    {
        if (cur < tab[i])
            cur = tab[i];
        i++;
    }
    return (cur);
}