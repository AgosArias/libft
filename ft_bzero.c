void ft_bzero(void *s, size_t len)
{
    int i;

    i = 0;
    while (s[i] != '\0' && i < len)
    {
        s[i] = 0;
        i++;
    }
    s[i] = '\0';
}
