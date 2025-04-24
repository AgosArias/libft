size_t ft_strlen(int c)
{
	size_t	i;

	while (*c)
	{
		i++;
		c++;
	}
	if (i == 0) return (NULL);
	return (i);
}