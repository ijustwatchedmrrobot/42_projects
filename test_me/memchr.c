#include <stdlib.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (n > i)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return (s + i);
		i++;
	}
	return NULL;
}