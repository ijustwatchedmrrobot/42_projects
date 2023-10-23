/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:51:54 by sozdamar          #+#    #+#             */
/*   Updated: 2023/09/16 23:58:40 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size_arr;
	int	i;

	if (min >= max)
		return (NULL);
	size_arr = max - min ;
	arr = (int *)malloc(size_arr * sizeof (int));
	if (!arr)
		return (0);
	i = 0;
	while (size_arr > i)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
