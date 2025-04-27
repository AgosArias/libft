int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
        i++;
    }
    if ((s1[i] != '\0' && s2[i] != '\0') || i == n)
    {
        return (s1[i] - s2[i]);
    }
    else
    {
        return (0);
    }
}
