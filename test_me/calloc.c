#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem_addr;

	mem_addr = malloc(count * size);
	if (!mem_addr)
		return (NULL);
	ft_bzero(mem_addr, count);
	return (mem_addr);
}