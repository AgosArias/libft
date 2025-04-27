int ft_atoi(const char *str)
{
    int i;
    int signo;
    int resultado;

    resultado = 0;
    i = 0;
    signo = 1;
    if (str[0] == "-")
    {
        signo = -1;
        i++
    }
    while (str[i] != '\0')
    {
        if ( str[i] <= '9' && str >= '0')
        {
            resultado = resultado * 10 + (str[i] - '0');
            i++;
        }
        else
            return (0);
    }
    return (resultado * signo);
}
