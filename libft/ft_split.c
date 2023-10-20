/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:02:18 by sozdamar          #+#    #+#             */
/*   Updated: 2023/10/20 17:02:20 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		while (*(s + i) && *(s + i) == c)
			i++;
		if (*(s + i))
		{
			i++;
			count++;
		}
		while (*(s + i) && *(s + i) != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{

}

/*
static size_t   ft_toklen(const char *s, char c)
{
    size_t  ret;
    ret = 0;
    while (*s)
    {
        if (*s != c)
        {
            ++ret;
            while (*s && *s != c)
                ++s;
        }
        else
            ++s;
    }
    return (ret);
}
char    **ft_split(char const *s, char c)
{
    char    **ret;
    size_t  i;
    size_t  len;
    if (!s)
        return (NULL);
    i = 0;
    ret = malloc(sizeof(char *) * (ft_toklen(s, c) + 1));
    if (!ret)
        return (0);
    while (*s)
    {
        if (*s != c)
        {
            len = 0;
            while (*s && *s != c && ++len)
                ++s;
            ret[i++] = ft_substr(s - len, 0, len);
        }
        else
            ++s;
    }
    ret[i] = 0;
    return (ret);
}
*/