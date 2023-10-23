/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:50:38 by sozdamar          #+#    #+#             */
/*   Updated: 2023/09/04 15:09:16 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	dig_1;
	int	dig_2;
	int	dig_3;

	dig_1 = '0';
	while (dig_1 <= '7')
	{
		dig_2 = dig_1 + 1;
		while (dig_2 <= '8')
		{
			dig_3 = dig_2 + 1;
			while (dig_3 <= '9')
			{
				write (1, &dig_1, 1); 
				write (1, &dig_2, 1);
				write (1, &dig_3, 1);
				if (dig_1 != '7')
					write (1, ", ", 2);
				dig_3++; 
			}
			dig_2++;
		}
		dig_1++;
	}
}
