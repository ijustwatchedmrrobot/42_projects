/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:44:03 by sozdamar          #+#    #+#             */
/*   Updated: 2023/10/09 20:44:04 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;

	i = ft_size((long)n);
	ret = (char *)malloc(sizeof(char) * (i + 1));
	if (!ret)
		return (NULL);
	*(ret + ft_size(n)) = '\0';
	if (n == 0)
		*(ret) = '0';
	if (n < 0)
	{
		*(ret) = '-';
		n *= -1;
	}
	i--;
	while (n > 0)
	{
		*(ret + i) = '0' + (n % 10);
		n /= 10;
		i--;
	}
	return (ret);
}
