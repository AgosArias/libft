#include <stdlib.h>

void *calloc(size_t nmemb, size_t size)
{
    char *matriz;
    int i;

    i = 0;
    matriz = (char **) malloc (sizeof(char) * nmemb + 1);
    while (i < nmemb)
    {
	    matriz[i]= (char *) malloc (sizeof(char) * size + 1);
	    i++;
    }
}
