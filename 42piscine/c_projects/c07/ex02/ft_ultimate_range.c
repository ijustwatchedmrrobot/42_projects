/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:59:25 by sozdamar          #+#    #+#             */
/*   Updated: 2023/09/17 00:12:24 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	size_arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size_arr = max - min;
	arr = (int *)malloc(size_arr * sizeof(int));
	if (!arr)
		return (-1);
	i = 0;
	while (i < size_arr)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (size_arr);
}
