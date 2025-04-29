void ft_putstr_fd(char *s, int fd)
{
    int i; 
    i = 0;
    while (s[i] != '\0')
    {
        ft_putstr_fd(s[i], fd);
        i++;
    }
}
