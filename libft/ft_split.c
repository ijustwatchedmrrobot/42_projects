/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:44:03 by sozdamar          #+#    #+#             */
/*   Updated: 2023/10/09 20:44:04 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strs_alloc(char const *s ,char c, char ***strs)
{
	size_t	i;
	size_t	strs_memo;

	i = 0;
	strs_memo = 0;
	while (*(s + i))
	{
		if (*(s + i) != c && *(s + i + 1) == c)
			strs_memo++;
		i++;
	}
	*strs = (char **)malloc(sizeof(char *) * (strs_memo + 1));
}

void	ft_dynamic_alloc(const char* s, char c, char **strs)
{
	size_t	i;
	size_t	word_size;
	size_t	pos;

	i = 0;
	pos = 0;
	while (*(s + pos))
	{
		word_size = 0;
		while (*(s + pos) != c && *(s + pos))
		{
			word_size++;
			pos++;
		}
		*(strs + i) = malloc(sizeof(char) * (word_size + 1));
		i++;
		pos++;
	}
}

void	ft_assign(char const *s, char c, char **strs)
{
	size_t	i;
	size_t	word_pos;
	size_t	j;

	i = 0;
	word_pos = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(s + i) != c)
		{
			*(*(strs + word_pos) + j) = *(s + i);
			i++;
		}
		*(*(strs + word_pos) + j) = '\0';
		i++;
		word_pos++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	strs_memo;
	size_t	i;

	strs = 0;
	ft_strs_alloc(s, c, &strs);
	ft_dynamic_alloc(s, c, strs);
	ft_assign(s, c, strs);
	return (strs);
}

int main()
{
	char **strs = ft_split("aaa bbb ccc",' ');
}