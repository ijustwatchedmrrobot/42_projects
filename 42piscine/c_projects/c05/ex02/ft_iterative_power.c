/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 00:24:51 by sozdamar          #+#    #+#             */
/*   Updated: 2023/09/14 00:28:43 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	cont;

	cont = nb;
	if (power < 0)
		return (0);
	else if (!(power || nb))
		return (1);
	else if (!power)
		return (1);
	else
	{
		while (power -1)
		{
			nb *= cont;
			power--;
		}
		return (nb);
	}
}
