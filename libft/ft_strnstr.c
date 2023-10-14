/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:25:23 by sozdamar          #+#    #+#             */
/*   Updated: 2023/10/09 21:25:24 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (NULL);
	if (!needle)
		return ((char *)haystack);
	while (*(haystack + i) && len > i)
	{
		j = 0;
		while (*(haystack + i + j) && *(needle + j)
			&& *(haystack + i + j) == *(needle + j))
			j++;
		if (!*(needle + j))
			return ((char *)(haystack + i));
	}
	return (NULL);
}
