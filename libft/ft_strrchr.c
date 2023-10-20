/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:46:17 by sozdamar          #+#    #+#             */
/*   Updated: 2023/10/09 20:46:19 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*adr;

	adr = (char *)s;
	s += ft_strlen((char *)s);
	while (s >= adr)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
