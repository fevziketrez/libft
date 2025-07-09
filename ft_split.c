/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:52:18 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/05 19:25:33 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_space(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
}

static size_t	len_nonspace(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	word_cnt(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = len_space(s, c);
	while (s[i])
	{
		i += len_nonspace(&s[i], c);
		words++;
		i += len_space(&s[i], c);
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	word_i;

	res = (char **)malloc(word_cnt(s, c) + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	word_i = 0;
	while (s[i])
	{
		ft_strlcpy(res[word_i++], &s[i], len_nonspace(&s[i], c));
		i += len_nonspace(&s[i], c);
		i += len_space(&s[i], c);
	}
	return (res);
}
