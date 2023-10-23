/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 07:07:56 by sozdamar          #+#    #+#             */
/*   Updated: 2023/09/16 14:00:59 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int args, char **argv)
{
	int	i;

	i = 1;
	if (args > 1)
	{
		while (argv[i])
		{
			ft_putchar(argv[i]);
			write (1, "\n", 1);
			i++;
		}
	}
}
