/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:52:18 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/10 18:26:31 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_space(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] == c)
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
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

static void	free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	word_i;

	if (!s)
		return (NULL);
	res = (char **)ft_calloc(word_cnt(s, c) + 1, sizeof(char *));
	if (res == NULL)
		return (NULL);
	i = 0;
	word_i = 0;
	while (s[i])
	{
		i = i + len_space(&s[i], c);
		res[word_i] = ft_substr(s, i, len_nonspace(&s[i], c));
		if (!res[word_i])
			return (free_all(res), (NULL));
		i = i + len_nonspace(&s[i], c);
		word_i++;
		i = i + len_space(&s[i], c);
	}
	free(res[word_cnt(s, c)]);
	res[word_cnt(s, c)] = NULL;
	return (res);
}
