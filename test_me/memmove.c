#include <stdlib.h>

size_t	ft_strlen(const char *s);

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;

	if (!dest && !src)
		return NULL;
	if (dest > src)
	{
		i = len;
		while (i-- > 0)
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i); 
	}
	else
	{
		i = 0;
		while (len > i++)
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i); 
	}
	return (dest);
}