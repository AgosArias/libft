char *ft_strtrim(char const *s1, char const *set)
{
    int x;
    int y;
    char *w;
    int counter;
    int start;

    x = 0;
    counter = 1;
    while (s1[x] != '\0' && counter == 1)
    {
        y = 0;
        counter = 0;
        while ( set[y] != '\0')
        {
            if (set[y] == s1[x])
                counter ++;
            y++;
        }
        x++;
    }
    if (s1[x] != '\0')
        start = x - 1;

}
