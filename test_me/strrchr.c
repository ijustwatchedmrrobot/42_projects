#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;

	tmp = s;
	s += ft_strlen(s);
	while (s >= tmp)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s--;
	}
	return NULL;
}