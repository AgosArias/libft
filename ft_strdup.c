#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*c;

	i = 0;
	while (src[i] == '\0')
		i++;
	c = (char *) malloc (i * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	c[i] = src[i];
	return (c);
}
