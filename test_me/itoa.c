#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int	arr_size(int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (1);
	else if(n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int i;
	char	*ret;
	
	if (n == -2147483648)
		return (strdup("-2147483648"));
	i = arr_size(n);
	ret = (char *)malloc(sizeof(char) * (i + 1));
	if (!ret)
		return (NULL);
	if (n == 0)
		*(ret) = '0';
	else if (n < 0)
	{
		*(ret) = '-';
		n *= -1;
	}
	*(ret + i) = '\0';
	while (n > 0)
	{
		*(ret + i - 1) = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (ret);
}

int main()
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(283764827));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-423856));
}