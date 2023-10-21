char	*strchr(const char *s, int c)
{
	while (*s++)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((char *)s);
	}
	return 0;
}