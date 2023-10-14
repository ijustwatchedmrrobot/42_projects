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

int	num_alloc(char **num, int n)
{
	int	i;
	
	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	num = (char *)malloc(sizeof(char) * (i + 1));
	return (i);
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
	char	*num;
	int		dig;
	dig = num_alloc(&num, n);
	num_assign(&num, n, dig);
	return	(num);
}

int main()
{
	ft_itoa(15123);
}