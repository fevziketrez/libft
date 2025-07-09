/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:52:18 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/10 02:13:32 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

// char	**ft_split(char const *s, char c)
// {
// 	char	**res;
// 	size_t	i;
// 	size_t	word_i;

// 	res = (char **)malloc(word_cnt(s, c) + 1);
// 	if (res == NULL)
// 		return (NULL);
// 	i = 0;
// 	word_i = 0;
// 	while (s[i])
// 	{
// 		res[word_i] = ft_substr(s, i, len_nonspace(s, c));
// 		i++;
// 	}
// 	return (res);
// }

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

	res = (char **)ft_calloc(sizeof(char *) * word_cnt(s, c) + 1, 1);
	if (res == NULL || !s)
		return (NULL);
	i = 0;
	word_i = 0;
	while (s[i])
	{
		i = i + len_space(&s[i], c);
//		printf("%c\n", s[i]);
		res[word_i] = ft_substr(s, i, len_nonspace(&s[i], c));
		if (!res[word_i])
			return (free_all(res), (NULL));
		i = i + len_nonspace(&s[i], c);
		word_i++;
		i = i + len_space(&s[i], c);
	}
	return (res);
}

int	main(void)
{
	int i = 0;
	char *ptr = ft_strdup("   abc  de f  f");
	char **res = ft_split(ptr, ' ');
//	printf("%s", res[0]);
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	free_all(res);
	free(ptr);
	return (1);
}
