void *ft_memmove(void *dest, const void *src, size_t n);
{
    size_t i;

    i = 0;
    while (dest[i] != '\0' && src[i] != '\0' && i < n)
    {
        &dest[i] = &src[i];
        i++;
    }
}
