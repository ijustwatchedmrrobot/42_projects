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

int	ft_neg(int *n)
{
	if (*n < 0)
	{
		*n *= -1;
		return	(1);
	}
	return	(0);
}

void	ft_swap(char *s1, char *s2)
{
	char temp;
	temp = s1;
	s1 = s2;
	s2 = temp;
}

void	ft_strrev(char *s)
{
	size_t	first;
	size_t	last;

	last = ft_strlen(s) - 1;
	first = 0;
	while (last > first)
	{
		ft_swap(&*(s + first),&*(s + last));
		first++;
		last--;
	}
}

void	num_alloc(char **num, int n, int sign)
{
	int	i;
	
	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	num = (char *)malloc(sizeof(char) * (i + 1 + sign));
}

void	num_assign(char **num, int n, int dig)
{
	int	i;

	i = 0;
	*(num + dig + 1) = '\0';
	while (dig)
	{
		*(num + dig - i) = n % 10;
		dig--;
		n /= 10; 
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	len;
	
	num_alloc(&res, n, ft_neg(n));
}

int main()
{
	ft_itoa(15123);
}