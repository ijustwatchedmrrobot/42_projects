/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 06:03:09 by sozdamar          #+#    #+#             */
/*   Updated: 2023/09/17 06:11:31 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_res_size(int size, char **strs, char *sep)
{
	int	i;
	int	res_size;

	res_size = 0;
	i = 0;
	while (size > i)
	{
		res_size += ft_strlen(strs[i]);
		i++;
	}
	res_size += ((ft_strlen(sep)) * (size - 1)) + 1;
	return (res_size);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	if (size <= 0)
		res = (char *)malloc(sizeof(char));
	else
	{
		res = (char *)malloc(ft_res_size(size, strs, sep) * sizeof(char));
		i = 0;
		res[i] = 0;
		while (size > i)
		{
			ft_strcat(res, strs[i]);
			if ((size - 1) > i)
				ft_strcat(res, sep);
			i++;
		}
	}
	return (res);
}
