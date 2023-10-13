/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:46:17 by sozdamar          #+#    #+#             */
/*   Updated: 2023/10/09 20:46:19 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*(dest + i) && i < size)
		i++;
	while (*(src + j) && (i + j + 1) < size)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
