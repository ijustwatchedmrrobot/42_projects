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

static void	ft_strs_alloc(char const *s, char c, char ***strs)
{
	size_t	i;
	size_t	strs_memo;

	i = 0;
	strs_memo = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			strs_memo++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
		else
			i++;
	}
	*strs = (char **)malloc(sizeof(char *) * (strs_memo + 1));
}

static void	ft_dynamic_alloc(const char *s, char c, char **strs)
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
		*(strs + i) = (char *)malloc(sizeof(char) * (word_size));
		i++;
		pos++;
	}
}

static void	ft_assign(char const *s, char c, char **strs)
{
	size_t	s_letter;
	size_t	strs_word;
	size_t	strs_letter;

	s_letter = 0;
	strs_word = 0;
	while (*(s + s_letter))
	{
		strs_letter = 0;
		while (*(s + s_letter) != c && *(s + s_letter))
		{
			*(*(strs + strs_word) + strs_letter) = *(s + s_letter);
			s_letter++;
			strs_letter++;
		}
		s_letter++;
		strs_word++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	strs = 0;
	ft_strs_alloc(s, c, &strs);
	ft_dynamic_alloc(s, c, strs);
	ft_assign(s, c, strs);
	return (strs);
}
