int ft_atoi(const char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while (str[i])
    {
        res = res * 10 + str[i] - 48;
        i++;
    }
    return (res * sign);
}