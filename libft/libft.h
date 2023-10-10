/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:50:55 by sozdamar          #+#    #+#             */
/*   Updated: 2023/10/09 17:51:01 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int x);
int	ft_isalnum(int x);
int	ft_isascii(int x);
int	ft_isprint(int x);
int	ft_toupper(int x);
int	ft_tolower(int x);
int ft_strlen(char *str);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	ft_bzero(void *s, size_t n);

#endif