size_t ft_strlcat(char *dest, const char *src, size_t size){
    int i;
    int j;

    i = 0;
    i = 0;
    while (dest[i] != '\0')
        i++;

    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (i);
}