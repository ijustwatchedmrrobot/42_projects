/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:48:13 by sozdamar          #+#    #+#             */
/*   Updated: 2023/09/04 17:56:21 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	digits(int a, int b, int c, int d)
{
	if (a <= c && b < d)
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, " ", 1);
		write (1, &c, 1);
		write (1, &d, 1);
		if (a != '9' || b != '8' || c != '9' || d != '9')
			write (1, ", ", 2);
	}
}

void	writer(int a, int b, int c, int d)
{
	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '8')
		{
			c = '0';
			while (c <= '9')
			{
				d = b + 1;
				while (d <= '9')
				{
					digits(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb2(void)
{
	int	dig_1;
	int	dig_2;
	int	dig_3;
	int	dig_4;

	dig_1 = 0;
	dig_2 = 0;
	dig_3 = 0;
	dig_4 = 0;
	writer(dig_1, dig_2, dig_3, dig_4);
}
