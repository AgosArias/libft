size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    int i;
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return i;
}
