/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:50:40 by sozdamar          #+#    #+#             */
/*   Updated: 2023/10/09 20:50:41 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*byte_ptr;
	size_t			i;

	byte_ptr = (unsigned char *)b;
	if (!b)
		return (NULL);
	i = 0;
	while (i < len)
	{
		byte_ptr[i] = c;
		i++;
	}
	return (b);
}
