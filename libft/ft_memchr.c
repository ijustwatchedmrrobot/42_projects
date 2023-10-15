/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:50:40 by sozdamar          #+#    #+#             */
/*   Updated: 2023/10/09 20:50:41 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	if (!s1)
		return (NULL);
	i = 0;
	ptr = (unsigned char *)s1;
	while (n > i)
	{
		if (*(ptr + i) == c)
			return ((unsigned char *)(s1 + i));
		i++;
	}
	return (NULL);
}
