void ft_putnbr_fd(int n, int fd)
{
    char c;

    if ( n < 0)
    {
        ft_putchar_fd('-',fd);
        n = -n;
    }
    if ( n < 10)
    {
        c = n + '0';
        ft_putchar_fd(c,fd);
    }
    else
    {
        c = n % 10 + '0';
        ft_putnbr_fd(n / 10,fd);
        ft_putchar_fd(c,fd)
    }
}