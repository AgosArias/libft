char **ft_split(char const *s, char c)
{
    int count;
    int boolean;
    char **matriz;
    int i;
    int len;
    count = 0;
    boolean = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c && boolean == 0)
        {
            boolean = 1;
            count++;
        }
        if (s[i] == c && boolean == 1)
            boolean = 0;
        i++;
    }
    matriz = (char **)malloc(sizeof(char *) * (count + 1));
    if (!matriz == NULL)
        return (NULL);
    count = 0;
    boolean = 0;
    i = 0;
    len = 1;
    while (s[i] != '\0')
    {
        if (s[i] != c && boolean == 0)
        {
            boolean = 1;
            count++;
            len = 1; 
        }
        else if (s[i] == c && boolean == 1)
        {
            boolean = 0;
            matriz[count - 1] = (char *)malloc(sizeof(char) * (len + 1));
            if (!matriz[count - 1] == NULL)
                return (NULL);
        }
        else if (s[i] != c)
        {
            len ++;
        }
        i++;
    }
    if (len != 0)
    {
        matriz[count - 1] = (char *)malloc(sizeof(char) * (len + 1));
        if (!matriz[count - 1] == NULL)
            return (NULL);
    }

    return (matriz)
}

