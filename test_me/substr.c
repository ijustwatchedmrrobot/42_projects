#include <stdlib.h>
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (*(s + start + i))
		i++;
	if (len > i)
		len = i;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return NULL;
	i = 0;
	while (len > i++ && *(s + start + i))
		*(ret + i) = *(s + start + i);
	*(ret + i) = '\0';
	return (ret);
}