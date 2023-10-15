/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:25:23 by sozdamar          #+#    #+#             */
/*   Updated: 2023/10/09 21:25:24 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_ptr;
	unsigned char const	*src_ptr;

	i = 0;
	dest_ptr = dest;
	src_ptr = src;
	if (dest < src)
	{
		while (i < n)
		{
			*(dest_ptr + i) = *(src_ptr + i);
			i++;
		}
	}
	else if (src < dest)
	{
		i = n - 1;
		while (0 < i)
		{
			*(dest_ptr + i) = *(src_ptr + i);
			i--;
		}
	}
	return (dest);
}
