/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saydinli <saydinli@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:37:45 by saydinli          #+#    #+#             */
/*   Updated: 2023/09/03 17:49:14 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	if_else(int i, int j, int a, int b)
{
	if ((i == 0 && j == 0) 
		|| (i == a - 1 && j == 0) 
		|| (i == a - 1 && j == b - 1) 
		|| (i == 0 && j == b - 1))
		ft_putchar('o');
	else if ((i == 0 && j < b) || (i == a - 1 && j < b))
		ft_putchar('-');
	else if ((j == 0 && i < a) || (j == b - 1 && i < a))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int b, int a)
{
	int	i;
	int	j;

	i = 0;
	if (a > 0 && b > 0)
	{
		while (i < a)
		{
			j = 0;
			while (j < b)
			{
				if_else(i, j, a, b);
				j++;
			}
			i++;
			ft_putchar('\n');
		}
	}
}
