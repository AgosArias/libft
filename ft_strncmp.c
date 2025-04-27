int strncmp(const char *s1, const char *s2, size_t n)
{
	size_t count;

	count = 0;
	while (count < n && s1[count] != '\0' && s2[count] != '\0' && s1[count] != s2[count])
		count++;
	if (s1[count] == s2[count])
		return (0);
	return (s1[count]-s2[count])
}
