/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:44:03 by sozdamar          #+#    #+#             */
/*   Updated: 2023/10/09 20:44:04 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	while (*(s + i))
	{
		size = 0;
		while (*(s + i) != c)
		{
			size++;
			i++;
		}
		*(strs + j) = malloc((size + 1) * sizeof(char));
		while (size)
		{
			*(*(strs + j) + i) = *(s + i);
			i++;
			size--;
		}
		*(*(strs + j) + i) = '\0';
		j++;
	}
	return (strs);
}

// kelimeleri ayır, size'larını al, belleği dinamik ayır