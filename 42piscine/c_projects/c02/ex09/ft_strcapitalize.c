/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 04:44:40 by sozdamar          #+#    #+#             */
/*   Updated: 2023/09/10 20:32:01 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next;
	int	up;

	i = 0;
	next = 1;
	up = 'A' - 'a';
	while (str[i] != '\0')
	{
		if (next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += up;
			next = 0;
		}
		else if (!next && str[i] >= 'A' && str[i] <= 'Z')
			str[i] -= up;
		else if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') 
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}
