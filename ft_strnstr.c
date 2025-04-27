char *strnstr(const char *haystack, const char *needle, size_t len)
{
    int x;
    int y;
    char *puntero;

    x = 0;
    y = 0;
    while (haystack[x] != '\0' && y < len)
    {
    	if (haystack[x] == needle[y] && y == 0)
	{
		puntero = &haystack[x];
		y++;
	}
	else if
		y++;
	else
		y = 0;
    }
    if (y == len)
	    return (puntero);
    return (NULL)
}
