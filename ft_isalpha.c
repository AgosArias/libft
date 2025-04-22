int	ft_isalpha(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	if (c <= 122 && c >= 97)
		return (1);	
	return (0);
}
