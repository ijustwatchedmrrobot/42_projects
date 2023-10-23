/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:05:00 by sozdamar          #+#    #+#             */
/*   Updated: 2023/09/06 13:14:00 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index_o;
	int	index_i;

	index_o = 0;
	while (index_o < size)
	{
		index_i = 0;
		while (index_i < size - index_o)
		{
			if (tab[index_i] > tab[index_i + 1])
			{
				ft_swap(&tab[index_i], &tab[index_i + 1]);
			}
			index_i++;
		}
		index_o++;
	}
}
