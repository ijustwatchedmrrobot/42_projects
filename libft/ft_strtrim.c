/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:41:43 by sozdamar          #+#    #+#             */
/*   Updated: 2023/10/09 20:41:45 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	j;

	if (s1 && set)
	{
		i = 0;
		j = ft_strlen(s1);
		while (*(s1 + i) && ft_strchr(set, *(s1 + i)))
			i++;
		while (*(s1 + j - 1) && ft_strchr(set, *(s1 + j - 1))
			&& j > i)
			j--;
		trimmed = malloc(sizeof(char) * (j - i + 1));
		if (trimmed == NULL)
			return (NULL);
		ft_strlcpy(trimmed, (s1 + i), (j - i + 1));
	}
	return (trimmed);
}
