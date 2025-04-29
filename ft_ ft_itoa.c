char *ft_itoa(int n)
{
    char c;
    int num;
    int i;
    int sign;
    int x;
    
    x = 0;
    sign = 0;
    i = 0;
    num = n;
    if (num < 0)
    {
        sign++; 
        num = -num;
    }
    while (num < 10)
    {
        num = num / 10
        i++;
    }
    c = (char *)malloc(sizeof(char) * (i + 2 + sign));
    if (!c == NULL)
        return (NULL);
    if (sign == 1)
    {
        c[x] = '-';
        x++
    }
    num = n;
    c[i + 2] = NULL;
    c[i + 1] = '\0';
    while(num < 10)
    {
        c[i] = (num % 10) + '0';
        num = num / 10;
        i--;
    }

    return (c);
}
